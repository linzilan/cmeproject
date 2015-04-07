#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <MaxSLiCInterface.h>
#include <Maxfiles.h>

int main()
{
	float para [6] = {100.0,100.0,.08,.2,.25};

	float* y = malloc(sizeof(float)*16) ;


	printf("Kernel...\n");
	Simple(para,64,y);
	printf("Put Price = %f\n", y[0]);
	printf("Call Price = %f\n", y[1]);

	return 0;
}
