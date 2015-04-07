/**
 * Document: MaxCompiler Tutorial (maxcompiler-tutorial)
 * Chapter: 4      Exercise: 1      Name: Simple Exercise
 * MaxFile name: SimpleExercise
 * Summary:
 * 	 Takes a stream and for each value x calculates x^2 + x.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <MaxSLiCInterface.h>
#include <Maxfiles.h>


int main()
{
	FILE* stream = fopen("futuresTradeSorted.csv", "r");
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

	/*    for (int i=0;i <100; i++)
	    {
	        printf("%d\t%f\t%f\t\n", date[i],time_to_maturity[i],price[i]);
	    }

*/

    //price , strike, 0.01, 0, 0.28, 0.115
//	float para [6] = {100,105,0.01,0.0,0.28,0.115};
    float para[6]={0};
    int idx=0;
 //  while (idx<=464130)
   while (idx<=10)
   {
    para[0]=price[idx]/100.0;
    para[1]=price[idx]/100.0;
    para[2]=0.01;
    para[3]=0;
    para[4]=0.28;
    para[5]=time_to_maturity[0];
 //   printf("%f %f %f\n",para[0],para[1], para[5]);
	float* y = malloc(sizeof(float)*8) ;

	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);

	 para[1]=price[idx]/100.0+1;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);
	para[1]=price[idx]/100.0-1;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);

	 para[1]=price[idx]/100.0+2;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);
	para[1]=price[idx]/100.0-2;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);


	 para[1]=price[idx]/100.0+5;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);
	para[1]=price[idx]/100.0-5;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);

	 para[1]=price[idx]/100.0+10;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);
	para[1]=price[idx]/100.0-10;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);


	 para[1]=price[idx]/100.0+20;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);
	para[1]=price[idx]/100.0-20;
	Simple(para,64,y);
	printf("Price = %f %f\n", y[0],y[1]);
	fprintf(outputcsv, "%d, %d,%f,%f, %fC,%fP \n", date[idx],delivery_date[idx],price[idx],para[1], y[1],y[0]);


	idx++;
   }
	return 0;
}
