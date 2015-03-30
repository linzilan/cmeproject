#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#include "MaxSLiCInterface.h"
#include "Maxfiles.h"

double N(double z) {
    if (z > 6.0) { return 1.0; }; // this guards against overflow
    if (z < -6.0) { return 0.0; };
    double b1 = 0.31938153;
    double b2 = -0.356563782;
    double b3 = 1.781477937;
    double b4 = -1.821255978;
    double b5 = 1.330274429;
    double p = 0.2316419;
    double c2 = 0.3989423;
    double a=fabs(z);
    double t = 1.0/(1.0+a*p);
    double b = c2*exp((-z)*(z/2.0));
    double n = ((((b5*t+b4)*t+b3)*t+b2)*t+b1)*t;
    n = 1.0-b*n;
    if ( z < 0.0 ) n = 1.0 - n;
    return n;
}

double option_price_call_black_scholes (double S,       // spot (underlying) price
				        double K,       // strike (exercise) price,
				        double r,       // interest rate
				        double sigma,   // volatility
				        double time) {  // time to maturity
    double time_sqrt = sqrt(time);
    double d1 = (log(S/K)+r*time)/(sigma*time_sqrt)+0.5*sigma*time_sqrt;
    double d2 = d1-(sigma*time_sqrt);
    return S*N(d1) - K*exp(-r*time)*N(d2);
}


double option_price_put_black_scholes( double S,      // spot price
				       double K,      // Strike (exercise) price,
				       double r,      // interest rate
				       double sigma,  // volatility
				       double time){
    double time_sqrt = sqrt(time);
    double d1 = (log(S/K)+r*time)/(sigma*time_sqrt) + 0.5*sigma*time_sqrt;
    double d2 = d1-(sigma*time_sqrt);
    return K*exp(-r*time)*N(-d2) - S*N(-d1);
}

int main()
{
	FILE* stream = fopen("/home/demo/Desktop/futuresTradeSorted.csv", "r");
	FILE *outputcsv;
	    outputcsv = fopen("output.csv", "w");
	    int date[464130];
	    float time_to_maturity[464130];
	    int delivery_date[464130];
	    float price[464130];
	    char line[1024];
	    int i=0;
	    while (fgets(line, 1024, stream))
	    {
	        char* tok = strdup(line);
	        for (tok = strtok(line, ",");
	             tok && *tok;
	             tok = strtok(NULL, ",\n"))
	        {
	            sscanf(tok,"%d", &date[i]);
	            tok = strtok(NULL, ",\n");
	            int tmp_time;
	            sscanf(tok,"%d", &tmp_time);
	            delivery_date[i]=tmp_time;
	            int year=(tmp_time-1503)/100;
	            time_to_maturity[i]=(year*365+(tmp_time/100-year-15)*30+40)/365.0;
	            tok = strtok(NULL, ",\n");
	            sscanf(tok,"%f", &price[i]);
	            tok = strtok(NULL, ",\n");
	        }
	        // NOTE strtok clobbers tmp
	        i++;
	        free(tok);
	    }

	printf("Read CSV complete\n");
/*
    //calculate Implied volatility by bisection method
    int type = 0;//for call option, or 1 for put option
    int idx=0;
        	float low_vol = 0.01;
        	float high_vol = 0.9;
        	float epsilon = 0.00001;
        	float market_price = 1.93;//option price

        	// Create the initial x mid-point value
        	float seed_sigma = 0.5 * (low_vol + high_vol);
        	float temp_price = type==0?option_price_call_black_scholes(price[idx]/100.0,price[idx]/100.0,0.01,seed_sigma,time_to_maturity[idx])\
        			:option_price_put_black_scholes(price[idx]/100.0,price[idx]/100.0,0.01,seed_sigma,time_to_maturity[idx]);//g(x);

        	do {
        			if (temp_price < market_price) {
        				low_vol = seed_sigma;
        			}

        			else if (temp_price > market_price) {
        				high_vol = seed_sigma;
        			}

        			seed_sigma = 0.5 * (low_vol + high_vol);
        			temp_price = type==0?option_price_call_black_scholes(price[idx]/100.0,price[idx]/100.0,0.01,seed_sigma,time_to_maturity[idx])\
        			    			:option_price_put_black_scholes(price[idx]/100.0,price[idx]/100.0,0.01,seed_sigma,time_to_maturity[idx]);
        		} while (fabs(temp_price - market_price) > epsilon);

        	float sigma = seed_sigma;
*/

	int size = 8192;//number of test case

    float call_price[size];
    float put_price[size];
    float rate[size];
    float sigma_test[size];
    float price_arr[size];
    float strike_arr[size];
    float ttm[size];


    for(int i=0;i<size;i++){
    	price_arr[i] = price[i]/100.0;
    	strike_arr[i] = price_arr[i];
    	rate[i]=0.03;//test value
    	sigma_test[i]=0.25;//test value
    	call_price[i]=0;
    	put_price[i]=0;
    	ttm[i]=time_to_maturity[i];
    }

   long sizeBytes = size * sizeof(float);
	BAW(size,strike_arr,sizeBytes,price_arr,sizeBytes,rate,sizeBytes,sigma_test,sizeBytes,ttm,sizeBytes,call_price,sizeBytes,put_price,sizeBytes);

	for(int i=0;i<size;i++)printf(" Call Price=%f Put Price = %f\n", call_price[i], put_price[i]);

	return 0;
}
