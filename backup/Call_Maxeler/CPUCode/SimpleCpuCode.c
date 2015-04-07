/**
 * Document: MaxCompiler Tutorial (maxcompiler-tutorial)
 * Chapter: 4      Exercise: 1      Name: Simple Exercise
 * MaxFile name: SimpleExercise
 * Summary:
 * 	 Takes a stream and for each value x calculates x^2 + x.
 */
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <MaxSLiCInterface.h>
#include <Maxfiles.h>

int main()
{
	float para [6] = {100,105,.05,0.0,.1,1.0};
	float* y = malloc(sizeof(float)*8) ;

	Simple(para,64,y);

	printf("Call Price = %f\n", y[0]);

	return 0;
}
