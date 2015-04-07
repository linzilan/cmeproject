
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;

void read_from_csv(string filename, vector<string> &date, vector<double> &spot)
{
    ifstream file (filename);
    string value;
    while(getline(file,value,','))
    {
        date.push_back(value);
        getline(file,value,file.widen('\r'));
        double temp=atof(value.c_str());
        spot.push_back(temp);
    }
}

