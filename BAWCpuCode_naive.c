#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#include "MaxSLiCInterface.h"
#include "Maxfiles.h"

#define risk_free 0.0003

inline double N(double *z) {
    if ((*z) > 6.0) { return 1.0; }; // this guards against overflow
    if ((*z) < -6.0) { return 0.0; };
    double b1 = 0.31938153;
    double b2 = -0.356563782;
    double b3 = 1.781477937;
    double b4 = -1.821255978;
    double b5 = 1.330274429;
    double p = 0.2316419;
    double c2 = 0.3989423;
    double a=fabs((*z));
    double t = 1.0/(1.0+a*p);
    double b = c2*exp((-(*z))*((*z)/2.0));
    double n = ((((b5*t+b4)*t+b3)*t+b2)*t+b1)*t;
    n = 1.0-b*n;
    if ( (*z) < 0.0 ) n = 1.0 - n;
    return n;
}

inline double option_price_call_black_scholes (const double *S,       // spot (underlying) price
                                               const double *K,       // strike (exercise) price,
                                               const double *r,       // interest rate
                                               const double *sigma,   // volatility
                                               const double *time) {  // time to maturity
    double time_sqrt = sqrt(*time);
    double d1 = (log((*S)/(*K))+(*r)*(*time))/((*sigma)*time_sqrt)+0.5*(*sigma)*time_sqrt;
    double d2 = d1-((*sigma)*time_sqrt);
    double *p_d1 = &d1;
    double *p_d2 = &d2;
    return (*S)*N(p_d1) - (*K)*exp(-(*r)*(*time))*N(p_d2);
}


inline double option_price_put_black_scholes( const double *S,      // spot price
                                             const double *K,      // Strike (exercise) price,
                                             const double *r,      // interest rate
                                             const double *sigma,  // volatility
                                             const double *time){
    double time_sqrt = sqrt(*time);
    double d1 = (log((*S)/(*K))+(*r)*(*time))/((*sigma)*time_sqrt)+0.5*(*sigma)*time_sqrt;
    double d2 = d1-((*sigma)*time_sqrt);
    d1 = -d1;
    d2 = -d2;
    double *p_d1 = &d1;
    double *p_d2 = &d2;
    return (*K)*exp(-(*r)*(*time))*N(p_d2) - (*S)*N(p_d1);
}

double get_lagged_underly(int current_t,int lag,const double *underly,const int *second){

    if(lag<0){//used previous trading data
        if(current_t+lag>0)return underly[current_t+lag];
        else return -1;
    }

    else if(lag == 0){
        return underly[current_t];
    }

    else{

        int current_second = second[current_t];

        for(int i=current_t;i>0;i--){
            if(current_second-second[i]>=lag){
                return underly[i];
            }
        }

        //printf("No underlying that is older for desired lag, use current underlying.\n");
        return -1;

    }
}

double get_lagged_strike(int current_t,int lag,const double *k,const int *second){

    if(lag<0){//used previous trading data
        if(current_t+lag>0)return k[current_t+lag];
        else return -1;
    }

    else if(lag == 0){
        return k[current_t];
    }

    else{

        int current_second = second[current_t];

        for(int i=current_t;i>0;i--){
            if(current_second-second[i]>=lag){
                return k[i];
            }
        }
        //printf("No underlying that is older for desired lag, use current underlying.\n");
        return -1;

    }
}

double get_lagged_ttm(int current_t,int lag,const double *t,const int *second){

    if(lag<0){//used previous trading data
        if(current_t+lag>0)return t[current_t+lag];
        else return -1;
    }

    else if(lag == 0){
        return t[current_t];
    }

    else{

        int current_second = second[current_t];

        for(int i=current_t;i>0;i--){
            if(current_second-second[i]>=lag){
                return t[i];
            }
        }

        //printf("No underlying that is older for desired lag, use current underlying.\n");
        return -1;

    }
}

int main()
{
    FILE* call_option_stream;
    FILE *output;
    int type = 0;//for call option, or 1 for put option
    //7081 line for call
    //9065 line for put

    int *second;
    double *time_to_maturity;
    int *delivery_date;
    double *underlying;
    double *bid;
    double *ask;
    double *strike;
    double *dynamic_sigma;
    double *midprice;

    if(type==1){
        call_option_stream = fopen("/home/demo/Desktop/put_merge_output.csv", "r");
        output = fopen("/home/demo/Desktop/put_merge_output_result.csv", "w");
        second = (int*)malloc(9065*sizeof(int));
        time_to_maturity = (double*)malloc(9065*sizeof(double));
        delivery_date=(int*)malloc(9065*sizeof(int));
        underlying=(double*)malloc(9065*sizeof(double));
        bid=(double*)malloc(9065*sizeof(double));
        ask=(double*)malloc(9065*sizeof(double));
        strike=(double*)malloc(9065*sizeof(double));
        dynamic_sigma=(double*)malloc(9065*sizeof(double));
        midprice=(double*)malloc(9065*sizeof(double));
    }

    else{
        call_option_stream = fopen("/home/demo/Desktop/call_merge_output.csv", "r");
        output = fopen("/home/demo/Desktop/call_merge_output_result.csv", "w");
        second = (int*)malloc(7081*sizeof(int));
        time_to_maturity = (double*)malloc(7081*sizeof(double));
        delivery_date=(int*)malloc(7081*sizeof(int));
        underlying=(double*)malloc(7081*sizeof(double));
        bid=(double*)malloc(7081*sizeof(double));
        ask=(double*)malloc(7081*sizeof(double));
        strike=(double*)malloc(7081*sizeof(double));
        dynamic_sigma=(double*)malloc(7081*sizeof(double));
        midprice=(double*)malloc(7081*sizeof(double));
    }

    char *line = (char*)malloc(1024*sizeof(char));
    int i=0;
    //header = seconds,deliver,underlying,bid,ask,strike
    while (fgets(line, 1024, call_option_stream))
    {
        char* tok = strdup(line);
        for (tok = strtok(line, ",");
             tok && *tok;
             tok = strtok(NULL, ",\n"))
        {
            //second
            sscanf(tok,"%d", &second[i]);
            tok = strtok(NULL, ",\n");
            //deliver_date
            int tmp_time;
            sscanf(tok,"%d", &tmp_time);
            delivery_date[i]=tmp_time;
            //TTM
            int year=(tmp_time-1503)/100;
            time_to_maturity[i]=(year*365+(tmp_time/100-year-15)*30+40)/365.0;
            tok = strtok(NULL, ",\n");
            //strike
            sscanf(tok,"%lf", &strike[i]);
            strike[i]/=100.0;
            tok = strtok(NULL, ",\n");
            //bid
            sscanf(tok,"%lf", &bid[i]);
            bid[i]/=100.0;
            tok = strtok(NULL, ",\n");
            //ask
            sscanf(tok,"%lf", &ask[i]);
            ask[i]/=100.0;
            tok = strtok(NULL, ",\n");
            //Underlying
            sscanf(tok,"%lf", &underlying[i]);
            underlying[i]/=100.0;
            tok = strtok(NULL, ",\n");

            //mid_price
            midprice[i]=(bid[i]+ask[i])/2.0;

        }
        i++;
        free(tok);
    }

    printf("Read option data completed.\nStart reading Underlying asset data for implied volatility calculation.\n");


    int sample_size = type==0? 7081:9065;


    //calculate Implied volatility by bisection method
    int idx=0;


    double interest_rate = risk_free;

    while(idx<sample_size)
    {
        double low_vol = 0.001;
        double high_vol = 1;
        double epsilon = 0.000001;
        double market_price = midprice[idx];//option price
        int iteration_count = 0;
        double bst_underly = get_lagged_underly(idx,-1,underlying,second);
        double bst_strike = get_lagged_strike(idx,0,strike,second);
        double bst_ttm = get_lagged_ttm(idx,0,time_to_maturity,second);

        if(bst_underly==-1){
            bst_underly=underlying[idx];
        }
        if(bst_strike==-1){
            bst_strike=strike[idx];
        }
        if(bst_ttm==-1){
            bst_ttm=time_to_maturity[idx];
        }

        double seed_sigma =  0.5 * (low_vol + high_vol);
        double temp_price = type==0?option_price_call_black_scholes(&bst_underly,&bst_strike,&interest_rate,&seed_sigma,&bst_ttm)\
        :option_price_put_black_scholes(&bst_underly,&bst_strike,&interest_rate,&seed_sigma,&bst_ttm);//g(x);

        while(fabs(temp_price - market_price)>epsilon) {
            if(iteration_count>2500){
             			//printf("bisection not converged, discarded.\n");
             			break;
            }
            if (temp_price < market_price) {
                low_vol = seed_sigma;
            }

            else if (temp_price > market_price) {
                high_vol = seed_sigma;
            }

            seed_sigma = 0.5 * (low_vol + high_vol);
            temp_price = type==0?option_price_call_black_scholes(&bst_underly,&bst_strike,&interest_rate,&seed_sigma,&bst_ttm)\
            :option_price_put_black_scholes(&bst_underly,&bst_strike,&interest_rate,&seed_sigma,&bst_ttm);
            iteration_count++;
            //printf("error = %f\n",fabs(temp_price - market_price));

        }


        dynamic_sigma[idx] = seed_sigma;

        idx++;

    }

    printf("Implied Volatility calculation completed.\n");

    int size=type==0?7088:9072;//number of test case
    int test_case=0;
    float call_price[size];
    float put_price[size];
    float rate[size];
    float sigma_test[size];
    float price_arr[size];
    float strike_arr[size];
    float ttm[size];


    for(int i=0;i<size;i++){
        price_arr[i] = underlying[i];
        strike_arr[i] = strike[i];
        ttm[i]=time_to_maturity[i];
        rate[i]=interest_rate;
        sigma_test[i]=dynamic_sigma[i];
        call_price[i]=0;
        put_price[i]=0;

    }


    long sizeBytes = size * sizeof(float);
    BAW(size,strike_arr,sizeBytes,price_arr,sizeBytes,rate,sizeBytes,sigma_test,sizeBytes,ttm,sizeBytes,call_price,sizeBytes,put_price,sizeBytes);

    if(type==0)
    {
        //header printing
        fprintf(output,"S,K,r,sigma,TTM,Call,Bid,Ask,Percent_diff\n");
        for(int i=0;i<7081;i++)
        {
            if(call_price[i]>ask[i]){
                //fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],call_price[i],bid[i],ask[i],fabs(call_price[i]-ask[i])/ask[i]*100);

            }
            else if(call_price[i]<bid[i]){
                //fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],call_price[i],bid[i],ask[i],fabs(call_price[i]-bid[i])/bid[i]*100);
            }
            else{
                test_case++;
                float mid=(bid[i]+ask[i])/2.0;
                //printf("%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],call_price[i],bid[i],ask[i],fabs(call_price[i]-mid)/mid*100);
                fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],call_price[i],bid[i],ask[i],fabs(call_price[i]-mid)/mid*100);
            }
        }
    }

    else{
        //header printing
        fprintf(output,"S,K,r,sigma,TTM,Put,Bid,Ask,Percent_diff\n");

        for(int i=0;i<9065;i++)
        {
            if(put_price[i]>ask[i])
            {
                //fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],put_price[i],bid[i],ask[i],fabs(put_price[i]-ask[i])/ask[i]*100);
            }
            else if(put_price[i]<bid[i])
            {
                //fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],put_price[i],bid[i],ask[i],fabs(put_price[i]-bid[i])/bid[i]*100);
            }
            else
            {
                test_case++;
                float mid=(bid[i]+ask[i])/2.0;
                //printf("%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],put_price[i],bid[i],ask[i],fabs(put_price[i]-mid)/mid*100);
                fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],put_price[i],bid[i],ask[i],fabs(put_price[i]-mid)/mid*100);
            }
        }
    }

    if(type==0)printf("Number of accurately price option = %d of 7081.\n",test_case);

    else{
     printf("Number of accurately price option = %d of 9065.\n",test_case);
    }

    fclose(call_option_stream);
    fclose(output);

    return 0;
}
