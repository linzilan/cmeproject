//
//  Mathematics.h
//  Mathematics_functions
//
//  Created by Hassan Ilyas on 2/21/15.
//  Copyright (c) 2015 Hassan. All rights reserved.
//

#ifndef Mathematics_functions_Mathematics_h
#define Mathematics_functions_Mathematics_h

// Exponential function uses the first 25 terms of power series to
// approximate the value of an exponential
double exponential(double x)
{
    double result = 1, term = 1;
    
    for (int i = 1; i < 25; i++)
    {
        term *= x /i;
        result += term;
    }
    
    return result;
    
}

// Logarithm function uses Newton Raphson to calculate the log of a number
// The process also uses the exponential function created above
double logarithm(double x)
{
    double N, P, A, E;
    E = 2.71828182845905;
    P = x;
    N = 0.0;
    
    // Create a crude seed to allow for faster convergence
    while(P >= E)
    {
        P /= E;
        N++;
    }
    
    N += (P / E);
    
    do
    {
        A = N;
        N = N - 1.0 + x / (exponential(N));
        
    } while(N != A);
    
    return N;
    
}

#endif
