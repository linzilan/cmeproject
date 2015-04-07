#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include "Whaley.h"
#include <thread>
#include <vector>
using namespace std;

int main() {
    string filename="input.csv";
    
        ifstream file (filename);
        cout<<file.good()<<endl;
   //     ofstream outputcsv;
     //   outputcsv.open ("output.csv");
        string value;
    double sum=0;
    int count=0;
    vector<string>dates;
    vector<double>future_prices;
    string date_tmp="20150203100000";

        while(getline(file,value,',')
           //   && count<10
              )
        {
            
      //      cout<<count<<endl;
            string date=value;
            
            getline(file,value);
            double temp=atof(value.c_str());
            double spot=temp/100.0;
            if (date==date_tmp)
            {
                sum+=spot;
                count++;
            }
            else
            {
                cout<<date<<endl;
                double sum_tmp=sum/count;
               // double result=return_Whaley(sum_tmp, 50, 0.01, 0, 0.35, 0.115);
                cout<<count<<endl;
              //  outputcsv << date_tmp<<','<<sum_tmp<<","<<result<<'\n' ;
                dates.push_back(date_tmp);
                future_prices.push_back(sum_tmp);
                
                
                
                
                date_tmp=date;
                sum=spot;

                count=1;

            }

       //     count++;
        }
    //outputcsv.close();
    
    // sencond read and calculate
    string call_filename="call05.csv";
    string put_filename="put05.csv";
    ifstream call_file (call_filename);
    
    ofstream calloutputcsv;
    calloutputcsv.open ("calloutput.csv");
    while(getline(call_file,value,',')
          //   && count<10
          )
    {
        
        string date_call=value;
        getline(call_file,value,',');
        double temp=atof(value.c_str());
        double strike=temp/100.0;
        getline(call_file,value,',');//call price

        getline(call_file,value);//type

        int index=0;
        string initial_date=dates[index];

      //  cout<<date_call<<" "<<strike<<endl;
        
        for (int i=0; i<dates.size(); i++)
        {
            cout<<strike<<endl;
            double tmp_result=return_Whaley(future_prices[i], strike, 0.01, 0, 0.25, 0.115);
            calloutputcsv << dates[i]<<','<<strike<<","<<future_prices[i]<<','<<tmp_result<<'\n' ;
        }
             
    }
    //price = price, strike: 50, 55, 45, 0.01, 0, 0.28, 0.115
    cout_Whaley(56.2948, 39.5, 0.01, 0, 0.25, 0.115);
    cout_Whaley(100, 95, 0.05, 0, 0.1, 1);
    cout_Whaley(100, 100, 0.05, 0, 0.1, 1);
    cout_Whaley(100, 105, 0.05, 0, 0.1, 1);
    cout_Whaley(100, 110, 0.05, 0, 0.1, 1);
    //Join the thread with the main thread
    return 0;
}
