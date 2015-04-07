//
//  main.cpp
//  Early Exercise
//
//  Created by Hassan Ilyas on 2/17/15.
//  Copyright (c) 2014 Hassan. All rights reserved.
//

// This program uses the Baron-Adesi and Whaley model for trying to
// find the boundary condition. The original paper prices an American
// but we do not need to use the whole paper. We only use the their
// idea to calculate the boundary value

// The code uses some of the codes from 1) Professor Srinivas from IE523
// 2) Numerical Recipes in C++ by Odegaard which we used in IE523

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>


// Inititalize everything and do the start up tasks

#define PI 3.141592653589793238462643
#define ERROR 1e-10
#define MAX_ITERATIONS 10000

using namespace std;

double risk_free_rate, strike_price, initial_stock_price, expiration_time, volatility,boundary_price, dividend_yield;

// This function is required for comparing the value of exercising right now
// vs waiting and exercising in future
double max(double a, double b) {
    return (b < a )? a:b;
}

// normal distribution function given by Odegaard
double n(const double& z) {
    // Simply calculate the pdf of a normal and return
    return (1.0/sqrt(2.0*PI))*exp(-0.5*z*z);
};

// cumulative normal distribution function given by Odegaard
double N(const double& z) {
    
    // Cumulative distribution function that calculates the integral much
    // more efficiently than a standard integral.
    
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
};

// European put function (edited version of the code used in IE523)
double european_put_payout( const double& S, // spot price
                            const double& X, // Strike (exercise) price,
                            const double& r, // interest rate
                            const double& q, // yield on underlying
                            const double& sigma, // volatility
                            const double& time) { // time to maturity
    
    
    // This function is a slightly modified version of the price of a European put
    // that we used in IE523. Becasue now we have a dividend paying stock we add
    // a exp(-q*time) term in the code. Rest is pretty much the same
    double sigma_sqr = pow(sigma,2.0);
    double time_sqrt = sqrt(time);
    double d1 = (log(S/X) + (r-q + 0.5*sigma_sqr)*time)/(sigma*time_sqrt);
    double d2 = d1-(sigma*time_sqrt);
    
    // Here we add the continuous dividend yield to the standard European
    // Black-Scholes formula
    double put_price = X*exp(-r*time)*N(-d2) - S*exp(-q*time)*N(-d1);
    
    return put_price;

}

// Function ratio for Newton Raphson in Whaley Model
double function_ratio(double S, double X, double q, double r, double time, double sigma)
{
    // This function first calculates all the parameters of the Whaley model
    double fVal = 0.0, derVal = 0.0;
    double b = r-q; // b from the paper by Whaley
    double M = 2.0*r/(sigma*sigma); // M from the paper by Whaley
    double n_whaley = 2.0*b/(sigma*sigma); // n from the paper by Whaley
    double time_sqrt = sqrt(time); // calculate the square root of time to be used later
    double K = 1.0 - exp(-r*time); // K from the paepr by Whaley
    double d1 = (log(S/X)+(b+0.5*sigma*sigma)*time)/(sigma*time_sqrt);
    double q1 = (-(n_whaley-1.0) - sqrt(pow((n_whaley-1),2.0) + 4.0*M/K))/2.0; // q1 from the paper by Whaley.
    
    // Here we calculate the function value and the value of its derivative.
    fVal = X - S - european_put_payout(S, X, r, q, sigma, time) + (S/q1)*(1.0 - exp((b-r)*time)* N(-d1));
    derVal = ((1.0/q1) - 1.0) * (1.0 - (exp((b-r)*time) * N(-d1))) + ((exp((b-r)*time))/q1) * n(-d1)/(sigma*time_sqrt);
    
    // Return the value of the ratio to be used in Newton Raphson iteratively
    return fVal/derVal;
    
}

// Newton Raphson Method
// We iterate over the values until we find a suitable solution
double Newton_Raphson(double S, double X, double q, double r, double time, double sigma)
{
    double Snew = 0.0;
    
    // The variable MAX_ITERATIONS is there in case the solution fails to converge
    // We do not need to worry about this in this case but still it is always a good
    // idea to have a safety condition in Newton Raphson
    for (int i=0; i< MAX_ITERATIONS; i++)
    {
        Snew = S - function_ratio(S, X, q, r,time, sigma); ///derivative_function(S, X, q, r, time, sigma));
        
        // The loop breaks once the difference in old and new value of S is
        // less than a preset very small value
        
        if(abs(Snew-S) < ERROR)
            return Snew;
        
        S = Snew;
        
    }
    
    // We return the strike as the boundary price in case the solution fails to converge. Apart from
    // time to maturity equals zero case there is unlikely to be a case where this is utlized
    return X;
}

int main (int argc, char* argv[])
{
    // Take all the required parameters as input from the command line
    //sscanf (argv[1], "%lf", &expiration_time); // The time to maturity
   /// sscanf (argv[2], "%lf", &risk_free_rate); // The interest rate at which we can loan freely e.g T-Bills
   // sscanf (argv[3], "%lf", &volatility); // The standard deviation of the stock price movements
   // sscanf (argv[4], "%lf", &dividend_yield); // The rate at which the stock is paying dividends. This is
                                                // continuously compounded
  //  sscanf (argv[5], "%lf", &strike_price); // The strike price for the put which in our case is 100

	double current_price, expiration_time, risk_free_rate, volatility, dividend_yield, strike_price;
	cin >> current_price >> strike_price >> risk_free_rate >> dividend_yield >> volatility >> expiration_time;
	
	double b = risk_free_rate - dividend_yield; // b from the paper by Whaley
	double M = 2.0*risk_free_rate / (volatility*volatility); // M from the paper by Whaley
	double n_whaley = 2.0*b / (volatility*volatility); // n from the paper by Whaley
	double time_sqrt = sqrt(expiration_time); // calculate the square root of time to be used later
	double K = 1.0 - exp(-risk_free_rate*expiration_time); // K from the paepr by Whaley
	double d1 = (log(current_price / strike_price) + (b + 0.5*volatility*volatility)*expiration_time) / (volatility*time_sqrt);
	double q1 = (-(n_whaley - 1.0) - sqrt(pow((n_whaley - 1), 2.0) + 4.0*M / K)) / 2.0; // q1 from the paper by Whaley.

    
    double initial_stock_price = strike_price; // We do not need an initial price but if we start with strike price the
   
    boundary_price = Newton_Raphson(initial_stock_price, strike_price, 0.0, risk_free_rate, expiration_time, volatility);
	double P = 0;
	if (current_price <= boundary_price)
	{
		P = strike_price - current_price;
	}
	else
	{
		double d1 = (log(boundary_price / strike_price) + (dividend_yield + 0.5 * volatility*volatility) * expiration_time) / (volatility
			* sqrt(expiration_time));
		double A1 = -(1.0 - exp((dividend_yield - risk_free_rate) * expiration_time) * N(-d1)) * (boundary_price / q1);
		double p = european_put_payout(current_price, strike_price, risk_free_rate, dividend_yield, volatility, expiration_time);
		P = p + A1*pow(current_price / boundary_price, q1);
	}
	
    cout << P<<endl<<boundary_price<< endl;
    cout << "--------------------------------------" << endl;
	system("pause");
	return 0;
}
