#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "MaxSLiCInterface.h"
#include "Maxfiles.h"

#define risk_free 0.0003

double *arr_volatilty_S_L_K_C;
double *arr_volatilty_S_G_K_C;
double *arr_volatilty_S_L_K_P;
double *arr_volatilty_S_G_K_P;

double icp_april_call=0.5421;
double icp_march_call=0.3447;
double icp_april_put=0.551;
double icp_march_put=0.3465;

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

double get_implied_vol(double s,double k,double r,double t,double option_price,int type){
			double low_vol = 0.001;
	        double high_vol = 1;
	        double epsilon = 0.000001;
	        double market_price = option_price;//option price
	        int iteration_count = 0;

	        double seed_sigma =  0.5 * (low_vol + high_vol);
	        double temp_price = type==0?option_price_call_black_scholes(&s,&k,&r,&seed_sigma,&t)\
	        :option_price_put_black_scholes(&s,&k,&r,&seed_sigma,&t);//g(x);

	        while(fabs(temp_price - market_price)>epsilon) {
	            if(iteration_count>2500){
	             			printf("bisection not converged, set to 0.31.\n");
	             			return 0.31;
	            }

	            if (temp_price < market_price) {
	                low_vol = seed_sigma;
	            }

	            else if (temp_price > market_price) {
	                high_vol = seed_sigma;
	            }

	            seed_sigma = 0.5 * (low_vol + high_vol);
	            temp_price = type==0?option_price_call_black_scholes(&s,&k,&r,&seed_sigma,&t)\
	            :option_price_put_black_scholes(&s,&k,&r,&seed_sigma,&t);
	            iteration_count++;
	            //printf("error = %f\n",fabs(temp_price - market_price));

	        }

	        return seed_sigma;
}

struct prev_date{
	double underlying;
	double k;
	double ttm;
	double bid;
	double ask;
	int ready;
	};

int main()
{
	clock_t start, end;
	double time;
	start= clock();
    FILE* call_option_stream;

    typedef struct prev_date data;

    FILE* call_march_stream = fopen("/home/demo/Desktop/result/call_march.csv", "w");
    FILE* put_march_stream = fopen("/home/demo/Desktop/result/put_march.csv", "w");
    FILE* call_april_stream = fopen("/home/demo/Desktop/result/call_april.csv", "w");
    FILE* put_april_stream = fopen("/home/demo/Desktop/result/put_april.csv", "w");

    data prev_data_call_march;
    data prev_data_call_april;
    data prev_data_put_march;
    data prev_data_put_april;

    prev_data_call_march.ready=0;
    prev_data_put_march.ready=0;
    prev_data_call_april.ready=0;
    prev_data_put_april.ready=0;

    FILE *output;
    int type = 1;//for call option, or 1 for put option
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

    arr_volatilty_S_L_K_C = (double*)malloc(sizeof(double)*200);
    arr_volatilty_S_G_K_C = (double*)malloc(sizeof(double)*200);
    arr_volatilty_S_L_K_P = (double*)malloc(sizeof(double)*200);
    arr_volatilty_S_G_K_P = (double*)malloc(sizeof(double)*200);

    int missed_arr_volatilty_S_L_K_C=0;
    int missed_arr_volatilty_S_G_K_C=0;
    int missed_arr_volatilty_S_L_K_P=0;
    int missed_arr_volatilty_S_G_K_P=0;

    for(int i=0;i<200;i++){
    	arr_volatilty_S_L_K_C[i] = 0;
    	arr_volatilty_S_G_K_C[i] = 0;
    	arr_volatilty_S_L_K_P[i] = 0;
    	arr_volatilty_S_G_K_P[i] = 0;
    }

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

    int reject = 0;

    while(idx<sample_size){

    	//double x = underlying[idx-1]-strike[idx-1];
    	//double mid_price = (bid[idx-1]+ask[idx-1])/2.0;

    	if(delivery_date[idx]==1503&&type==0)
    	{//March call
    		if(prev_data_call_march.ready!=0)
    		{
    			double x = prev_data_call_march.underlying - prev_data_call_march.k;
    			double mid_price = (prev_data_call_march.bid+prev_data_call_march.ask)/2.0;
    			//y = 0.0003x2 + 0.0025x + 0.3447
    			dynamic_sigma[idx] = 0.0003*pow(x,2)+0.0025*x+icp_march_call;
    			fprintf(call_march_stream,"%f,%f\r\n",x,dynamic_sigma[idx]);
    			icp_march_call = get_implied_vol(prev_data_call_march.underlying,prev_data_call_march.k,interest_rate,prev_data_call_march.ttm,mid_price,type)-(0.0003*pow(x,2)+0.0025*x);
    			prev_data_call_march.underlying = underlying[idx];
    			prev_data_call_march.k = strike[idx];
    			prev_data_call_march.ttm = time_to_maturity[idx];
    			prev_data_call_march.bid = bid[idx];
    			prev_data_call_march.ask = ask[idx];
    		}
    		else{
    			prev_data_call_march.underlying = underlying[idx];
    			prev_data_call_march.k = strike[idx];
    			prev_data_call_march.ttm = time_to_maturity[idx];
    			prev_data_call_march.bid = bid[idx];
    			prev_data_call_march.ask = ask[idx];
    			prev_data_call_march.ready = 1;
    			double x = prev_data_call_march.underlying - prev_data_call_march.k;
    			double mid_price = (prev_data_call_march.bid+prev_data_call_march.ask)/2.0;
    			dynamic_sigma[idx] =  0.0003*pow(x,2)+0.0025*x+icp_march_call;
    			fprintf(call_march_stream,"%f,%f\r\n",x,dynamic_sigma[idx]);
    			icp_march_call = get_implied_vol(prev_data_call_march.underlying,prev_data_call_march.k,interest_rate,prev_data_call_march.ttm,mid_price,type)-(0.0003*pow(x,2)+0.0025*x);

    		}
    	}

    	else if(delivery_date[idx]==1503&&type==1){//March put
    		if(prev_data_put_march.ready!=0)
    		    		{
    		    			double x = prev_data_put_march.underlying - prev_data_put_march.k;
    		    			double mid_price = (prev_data_put_march.bid+prev_data_put_march.ask)/2.0;
    		    			dynamic_sigma[idx] =  0.0003*pow(x,2)+0.0033*x+icp_march_put;
    		    			fprintf(put_march_stream,"%f,%f\r\n",x,dynamic_sigma[idx]);
    		    			icp_march_put = get_implied_vol(prev_data_put_march.underlying,prev_data_put_march.k,interest_rate,prev_data_put_march.ttm,mid_price,type)-(0.0003*pow(x,2)+0.0033*x);
    		    			prev_data_put_march.underlying = underlying[idx];
    		    			prev_data_put_march.k = strike[idx];
    		    			prev_data_put_march.ttm = time_to_maturity[idx];
    		    			prev_data_put_march.bid = bid[idx];
    		    			prev_data_put_march.ask = ask[idx];
    		    		}
    		    		else
    		    		{
    		    			prev_data_put_march.underlying = underlying[idx];
    		    			prev_data_put_march.k = strike[idx];
    		    			prev_data_put_march.ttm = time_to_maturity[idx];
    		    			prev_data_put_march.bid = bid[idx];
    		    			prev_data_put_march.ask = ask[idx];
    		    			prev_data_put_march.ready = 1;
    		    			double x = prev_data_put_march.underlying - prev_data_put_march.k;
    		    			double mid_price = (prev_data_put_march.bid+prev_data_put_march.ask)/2.0;
    		    			dynamic_sigma[idx] =  0.0003*pow(x,2)+0.0033*x+icp_march_put;
    		    			fprintf(put_march_stream,"%f,%f\r\n",x,dynamic_sigma[idx]);
    		    			icp_march_put = get_implied_vol(prev_data_put_march.underlying,prev_data_put_march.k,interest_rate,prev_data_put_march.ttm,mid_price,type)-(0.0003*pow(x,2)+0.0033*x);
    		    		}
    	}

    	else if(delivery_date[idx]==1504&&type==0){//April call

    		if(prev_data_call_april.ready!=0)
    		    		{
    		    			double x = prev_data_call_april.underlying - prev_data_call_april.k;
    		    			double mid_price = (prev_data_call_april.bid+prev_data_call_april.ask)/2.0;
    		    			//y= 0.0001x2 + 0.0011x + 0.5421
    		    			dynamic_sigma[idx] =  0.0001*pow(x,2)+0.0011*x+icp_april_call;
    		    			fprintf(call_april_stream,"%f,%f\r\n",x,dynamic_sigma[idx]);
    		    			icp_april_call = get_implied_vol(prev_data_call_april.underlying,prev_data_call_april.k,interest_rate,prev_data_call_april.ttm,mid_price,type)-(0.0001*pow(x,2)+0.0011*x);
    		    			prev_data_call_april.underlying = underlying[idx];
    		    			prev_data_call_april.k = strike[idx];
    		    			prev_data_call_april.ttm = time_to_maturity[idx];
    		    			prev_data_call_april.bid = bid[idx];
    		    			prev_data_call_april.ask = ask[idx];
    		    		}
    		    		else{
    		    			prev_data_call_april.underlying = underlying[idx];
    		    			prev_data_call_april.k = strike[idx];
    		    			prev_data_call_april.ttm = time_to_maturity[idx];
    		    			prev_data_call_april.bid = bid[idx];
    		    			prev_data_call_april.ask = ask[idx];
    		    			prev_data_call_april.ready = 1;
    		    			double x = prev_data_call_april.underlying - prev_data_call_april.k;
    		    			double mid_price = (prev_data_call_april.bid+prev_data_call_april.ask)/2.0;
    		    			dynamic_sigma[idx] =  0.0001*pow(x,2)+0.0011*x+icp_april_call;
    		    			fprintf(call_april_stream,"%f,%f\r\n",x,dynamic_sigma[idx]);
    		    			icp_april_call = get_implied_vol(prev_data_call_april.underlying,prev_data_call_april.k,interest_rate,prev_data_call_april.ttm,mid_price,type)-(0.0001*pow(x,2)+0.0011*x);

    		    		}
    	}

    	else if(delivery_date[idx]==1504&&type==1){//April put

    		if(prev_data_put_april.ready!=0)
    		    		    		{
    		    		    			double x = prev_data_put_april.underlying - prev_data_put_april.k;
    		    		    			double mid_price = (prev_data_put_april.bid+prev_data_put_april.ask)/2.0;
    		    		    			dynamic_sigma[idx] =  0.0003*pow(x,2)+0.0043*x+icp_april_put;
    		    		    			fprintf(put_april_stream,"%f,%f\r\n",x,dynamic_sigma[idx]);
    		    		    			icp_april_put = get_implied_vol(prev_data_put_april.underlying,prev_data_put_april.k,interest_rate,prev_data_put_april.ttm,mid_price,type)-(0.0003*pow(x,2)+0.0043*x);
    		    		    			prev_data_put_april.underlying = underlying[idx];
    		    		    			prev_data_put_april.k = strike[idx];
    		    		    			prev_data_put_april.ttm = time_to_maturity[idx];
    		    		    			prev_data_put_april.bid = bid[idx];
    		    		    			prev_data_put_april.ask = ask[idx];
    		    		    		}
    		    		    		else{
    		    		    			prev_data_put_april.underlying = underlying[idx];
    		    		    			prev_data_put_april.k = strike[idx];
    		    		    			prev_data_put_april.ttm = time_to_maturity[idx];
    		    		    			prev_data_put_april.bid = bid[idx];
    		    		    			prev_data_put_april.ask = ask[idx];
    		    		    			prev_data_put_april.ready = 1;
    		    		    			double x = prev_data_put_april.underlying - prev_data_put_april.k;
    		    		    			double mid_price = (prev_data_put_april.bid+prev_data_put_april.ask)/2.0;
    		    		    			dynamic_sigma[idx] =  0.0003*pow(x,2)+0.0043*x+icp_april_put;
    		    		    			fprintf(put_april_stream,"%f,%f\r\n",x,dynamic_sigma[idx]);
    		    		    			icp_april_put = get_implied_vol(prev_data_put_april.underlying,prev_data_put_april.k,interest_rate,prev_data_put_april.ttm,mid_price,type)-(0.0003*pow(x,2)+0.0043*x);

    		    		    		}
    	}
    	else {
    		reject++;
    	}
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
            	if((delivery_date[i]==1504||delivery_date[i]==1503)){
                test_case++;
                float mid=(bid[i]+ask[i])/2.0;
                //printf("%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],call_price[i],bid[i],ask[i],fabs(call_price[i]-mid)/mid*100);
                fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],call_price[i],bid[i],ask[i],fabs(call_price[i]-mid)/mid*100);
            	}
            }
        }

        //printf("Missed Volatility S>K = %d, Missed Volatility S<K = %d\n",missed_arr_volatilty_S_G_K_C,missed_arr_volatilty_S_L_K_C);
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
            	if((delivery_date[i]==1504||delivery_date[i]==1503)){
                test_case++;
                float mid=(bid[i]+ask[i])/2.0;
                //printf("%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],put_price[i],bid[i],ask[i],fabs(put_price[i]-mid)/mid*100);
                fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,dynamic_sigma[i],time_to_maturity[i],put_price[i],bid[i],ask[i],fabs(put_price[i]-mid)/mid*100);
            	}
            }
        }
        //printf("Missed Volatility S>K = %d, Missed VolatiClity S<K = %d\n",missed_arr_volatilty_S_G_K_P,missed_arr_volatilty_S_L_K_P);
    }

    if(type==0)printf("Number of accurately price option = %d of %d.\n",test_case,7081-reject);

    else{
     printf("Number of accurately price option = %d of %d.\n",test_case,9065-reject);
    }

    fclose(call_option_stream);
    fclose(output);
    fclose(call_april_stream);
    fclose(call_march_stream);
    fclose(put_april_stream);
    fclose(put_march_stream);

    end = clock();
    time = (double) (end - start)/CLOCKS_PER_SEC;
    printf("time is %lf\n", time);
    return 0;
}
