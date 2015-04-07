#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <cmath>

using namespace std;
const double ACCURACY = 1.0e-6;
#define NUM_THREADS     4

struct thread_data{
    int  thread_id;
    double S;
    double X;
    double r;
    double b;
    double sigma;
    double time;
};

double cdfN(const double& z) {
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

double option_price_european_call_payout(double S, double X, double r, double q, double sigma, double time){
    
    double sigma_sqr = pow(sigma,2);
    double time_sqrt = sqrt(time);
    double d1 = (log(S/X) + (r-q + 0.5*sigma_sqr)*time)/(sigma*time_sqrt);
    double d2 = d1-(sigma*time_sqrt);
    double call_price = S * exp(-q*time)* cdfN(d1) - X * exp(-r*time) * cdfN(d2);
    return call_price;
    
}


void *Baw_option_pricing(void *threadarg)
{
    struct thread_data *my_data;
    
    my_data = (struct thread_data *) threadarg;
    
   // cout << "Thread ID : " << my_data->thread_id ;
    
    double S=my_data->S;
    double X=my_data->X;
    double r=my_data->r;
    double b=my_data->b;
    double sigma=my_data->sigma;
    double time=my_data->time;
    
    double sigma_sqr = sigma * sigma;
    double time_sqrt = sqrt(time);
    double nn = 2.0*b/ sigma_sqr;
    double m = 2.0 * r / sigma_sqr;
    double K = 1.0 - exp(-r * time);
    double q2 = (-(nn - 1) + sqrt(pow((nn - 1), 2.0) + (4 * m / K))) * 0.5;
    double q2_inf = 0.5 * (-(nn - 1) + sqrt(pow((nn - 1), 2.0) + 4.0 * m)); // seed value from paper
    double S_star_inf = X / (1.0 - 1.0 / q2_inf);
    double h2 = -(b * time + 2.0 * sigma * time_sqrt) * (X / (S_star_inf - X));
    double S_seed = X + (S_star_inf - X) * (1.0 - exp(h2));
    int no_iterations = 0; // iterate on S to find S_star, using Newton steps
    double Si = S_seed;
    double g = 1;
    double gprime = 1.0;
    while ((fabs(g) > ACCURACY) && (fabs(gprime) > ACCURACY) // to avoid exploding Newton's
           && (no_iterations++ < 500) && (Si > 0.0)) {
        double c = option_price_european_call_payout(Si, X, r, b, sigma, time);
        double d1 = (log(Si / X) + (b + 0.5 * sigma_sqr) * time) / (sigma
                                                                    * time_sqrt);
        g = (1.0 - 1.0 / q2) * Si - X - c + (1.0 / q2) * Si * exp((b - r)* time) * cdfN(d1);
        gprime = (1.0 - 1.0 / q2) * (1.0 - exp((b - r) * time) * cdfN(d1)) + (1.0
                                                                              / q2) * exp((b - r) * time) * cdfN(d1) * (1.0
                                                                                                                        / (sigma * time_sqrt));
        Si = Si - (g / gprime);
    };
    double S_star = 0;
    if (fabs(g) > ACCURACY) {
        S_star = S_seed;
    } // did not converge
    else {
        S_star = Si;
    };
    double C = 0;
    double c = option_price_european_call_payout(S, X, r, b, sigma, time);
    if (S >= S_star) {
        C = S - X;
    } else {
        double d1 = (log(S_star / X) + (b + 0.5 * sigma_sqr) * time) / (sigma
                                                                        * time_sqrt);
        double A2 = (1.0 - exp((b - r) * time) * cdfN(d1)) * (S_star / q2);
        C = c + A2 * pow((S / S_star), q2);
    };
    cout<<my_data->thread_id<<" , K = "<<my_data->X<<" , "<< max(C, c)<<endl; // know value will never be less than BS value
    
    pthread_exit(NULL);
}

int main ()
{
    pthread_t threads[NUM_THREADS];
    struct thread_data td[NUM_THREADS];
    int rc;
    int i;
    
    double *k = (double*)malloc(sizeof(double)*4);
    k[0]=90;
    k[1]=80;
    k[2]=70;
    k[3]=60;
    
    for( i=0; i < NUM_THREADS; i++ ){
        cout <<"main() : creating thread, " << i << endl;
        td[i].thread_id = i;
        td[i].r = 0.01;
        td[i].b = 0;
        td[i].S = 100;
        td[i].sigma = 0.25;
        td[i].time = 1;
        td[i].X = k[i];
        rc = pthread_create(&threads[i], NULL,
                            Baw_option_pricing, (void *)&td[i]);
        if (rc){
            cout << "Error:unable to create thread," << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}