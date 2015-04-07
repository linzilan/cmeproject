#ifndef __MAIN_CPP
#define __MAIN_CPP

#include "black_scholes.h"
#include "interval_bisection.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	// First we create the parameter list
	double F;  // Underlying future price
	double K;  // Strike price
	double r;   // Risk-free rate (5%)
	double T;    // One year until expiry
	double C_M; // Option market price

	cout << "Please enter underlying future price: ";
	cin >> F;
	cout << "Please enter strike price: ";
	cin >> K;
	cout << "Please enter risk_free interest rate: ";
	cin >> r;
	cout << "Please enter expiration time of option: ";
	cin >> T;
	cout << "Please enter option market prcie: ";
	cin >> C_M;


	double S = F*exp(-r*T);//using Black's model, the underliying asset price should be discounted future price 

	// Create the Black-Scholes Call functor
	BlackScholesCall bsc(S, K, r, T);

	// Interval Bisection parameters
	double low_vol = 0.05;
	double high_vol = 0.35;
	double episilon = 0.001;

	// Calculate the implied volatility
	double sigma = interval_bisection(C_M, low_vol, high_vol, episilon, bsc);

	// Output the values
	std::cout << "Implied Vol: " << sigma << std::endl;
	system("pause");

	return 0;
}
#endif