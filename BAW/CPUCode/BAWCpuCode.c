#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#include "MaxSLiCInterface.h"
#include "Maxfiles.h"

//#define interest_rate 0.01

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

int main()
{

	FILE* call_option_stream = fopen("/home/demo/Desktop/put_merge_output.csv", "r");
	FILE *output = fopen("/home/demo/Desktop/put_merge_output_result.csv", "w");
	//FILE* put_option_stream = fopen("/home/demo/Desktop/put_merge_output.csv", "r");

	//7081 line for call
	//9065 line for put
		int second[9065];
		double time_to_maturity[9065];
		int delivery_date[9065];
		double underlying[9065];
		double bid[9065];
		double ask[9065];
		double strike[9065];

		double midprice[9065];

	    char line[1024];
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
	            //Underlying
	            sscanf(tok,"%lf", &underlying[i]);
	            underlying[i]/=100.0;
	            tok = strtok(NULL, ",\n");
	            //bid
	            sscanf(tok,"%lf", &bid[i]);
	            bid[i]/=100.0;
	            tok = strtok(NULL, ",\n");
	            //ask
	            sscanf(tok,"%lf", &ask[i]);
	            ask[i]/=100.0;
	            tok = strtok(NULL, ",\n");
	            //strike
	            sscanf(tok,"%lf", &strike[i]);
	            strike[i]/=100.0;
	            tok = strtok(NULL, ",\n");
	            //mid_price
	            midprice[i]=(bid[i]+ask[i])/2.0;

	        }
	        // NOTE strtok clobbers tmp
	        i++;
	        free(tok);
	    }

	printf("Read option data completed.\nStart reading Underlying asset data for implied volatility calculation.\n");
     i=0;
	//for(i=0;i<7081;i++)printf("Underly = %f, ttm = %f, bid = %f, ask = %f, strike = %f\n",underlying[i],time_to_maturity[i],bid[i],ask[i],strike[i]);

int sample_size = 1000;

double sigma = 0;
         //calculate Implied volatility by bisection method
         int type = 1;//for call option, or 1 for put option
         int idx=0;
         int idx_factor=0;


         double interest_rate = 0.08;

         while(idx+idx_factor<sample_size)
         {
        	 double low_vol = 0.001;
        	 double high_vol = 1;
        	 double epsilon = 0.000001;
        	 double market_price = midprice[idx];//option price
        	 int iteration_count = 0;
        	 int reject_data = 0;

             	//double chk = 0;
             	// Create the initial x mid-point value
        	 double seed_sigma =  0.5 * (low_vol + high_vol);
        	 double temp_price = type==0?option_price_call_black_scholes(&underlying[idx],&strike[idx],&interest_rate,&seed_sigma,&time_to_maturity[idx])\
             			:option_price_put_black_scholes(&underlying[idx],&strike[idx],&interest_rate,&seed_sigma,&time_to_maturity[idx]);//g(x);

             	while(fabs(temp_price - market_price)>epsilon) {
             		if(iteration_count>2500){
             			//printf("bisection not converged, discarded.\n");
             			reject_data=1;
             			idx_factor-=1;
             			break;
             		}
             			if (temp_price < market_price) {
             				low_vol = seed_sigma;
             			}

             			else if (temp_price > market_price) {
             				high_vol = seed_sigma;
             			}

             			seed_sigma = 0.5 * (low_vol + high_vol);
             			temp_price = type==0?option_price_call_black_scholes(&underlying[idx],&strike[idx],&interest_rate,&seed_sigma,&time_to_maturity[idx])\
             			    			:option_price_put_black_scholes(&underlying[idx],&strike[idx],&interest_rate,&seed_sigma,&time_to_maturity[idx]);
             			iteration_count++;
             			//printf("error = %f\n",fabs(temp_price - market_price));

             	}

             	if(reject_data==0){

             		sigma += seed_sigma;
             	}
             	idx++;

         }




         double sample_sigma = sigma/sample_size;

	 printf("Implied Volatility calculation completed.");
	 printf("\n\nSigma = %f\n\n",sample_sigma);

	int size = 2048;//number of test case

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
    	rate[i]=interest_rate;//test value
    	sigma_test[i]=sample_sigma;//test value
    	call_price[i]=0;
    	put_price[i]=0;
    	ttm[i]=time_to_maturity[i];
    }

   long sizeBytes = size * sizeof(float);
	BAW(size,strike_arr,sizeBytes,price_arr,sizeBytes,rate,sizeBytes,sigma_test,sizeBytes,ttm,sizeBytes,call_price,sizeBytes,put_price,sizeBytes);

	if(type==0)
	{
		//header printing
			fprintf(output,"S,K,r,sigma,TTM,Call,Market,Error\n");
		for(int i=0;i<size;i++)
		{
		printf("%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,sample_sigma,time_to_maturity[i],call_price[i],midprice[i],fabs(call_price[i]-midprice[i]));
		fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,sample_sigma,time_to_maturity[i],call_price[i],midprice[i],fabs(call_price[i]-midprice[i]));
		}
	}

	else{
		//header printing
			fprintf(output,"S,K,r,sigma,TTM,Put,Market,Error\n");
		for(int i=0;i<size;i++)
				{
				printf("%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,sample_sigma,time_to_maturity[i],put_price[i],midprice[i],fabs(put_price[i]-midprice[i]));
				fprintf(output,"%f,%f,%f,%f,%f,%f,%f,%f\n", underlying[i],strike[i],interest_rate,sample_sigma,time_to_maturity[i],put_price[i],midprice[i],fabs(put_price[i]-midprice[i]));
				}
	}

	fclose(call_option_stream);
	fclose(output);

	return 0;
}
