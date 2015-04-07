#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <MaxSLiCInterface.h>
#include <Maxfiles.h>


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

    float parameters[6]={};
    int idx=0;

    float option_price[8] = {};

    while (idx<=464130)
   {
    	//float *option_price = (float*)malloc(8*sizeof(float));
    	//printf("%f",price[idx]);
    	//ATM option S=K
    	parameters[0]=price[idx]/100.0;//S
    	parameters[1]=price[idx]/100.0;//K
    	parameters[2]=0.01;//r
    	parameters[3]=0;//q
    	parameters[4]=0.28;//Sigma
    	parameters[5]=time_to_maturity[0];//TTM

    	printf("S=%f K=%f r=%f q=%f sigma=%f time=%f",parameters[0],parameters[1],parameters[2],parameters[3],parameters[4],parameters[5]);

	BAW(parameters,4,option_price);

	printf(" Call Price=%f Put Price = %f\n", option_price[1], option_price[0]);
	//fprintf(outputcsv, "%d, %d, %f,%f \n", date[idx],delivery_date[idx],price[idx], y[0]);
	idx++;
   }

	return 0;
}
