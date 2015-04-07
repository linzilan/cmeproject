/*
 * main.cpp
 *
 *  Created on: Feb 21, 2015
 *      Author: demo
 */
#include <iostream>
#include <cstdlib>
//#include <pthread.h>
#include <cmath>
#include "Whaley.h"
#include <thread>



int main() {



	cout_Whaley( 100, 90, 0.05, 0, 0.1, 1);
	cout_Whaley( 100, 95, 0.05, 0, 0.1, 1);
	cout_Whaley( 100, 100, 0.05, 0, 0.1, 1);
	cout_Whaley( 100, 105, 0.05, 0, 0.1, 1);
	cout_Whaley( 100, 110, 0.05, 0, 0.1, 1);

        //Join the thread with the main thread
        
	return 0;


}
