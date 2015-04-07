//
//  main.cpp
//  readCsv
//
//  Created by chi mu on 2015-03-01.
//  Copyright (c) 2015 chi mu. All rights reserved.
//

#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ReadCsv( int lineNum){
    ifstream inFile ("/Users/retsoom/Documents/Spring2015/FIN580/RMProject/XNYM_BBO_LO_OPT_20150202_20150206.txt");
    string line;

    ofstream myfile;
    myfile.open ("puttradewithdelivery.txt");
    
    while ((getline (inFile, line))&& (true)) {
        /*
        myfile<<line.substr(0, 14)<<" ";
        myfile<<line.at(36)<<line.at(37)<<line.at(38)<<line.at(39)<<line.at(40)<<line.at(41)<<line.at(42)<< " ";
        myfile<<line.at(44)<<line.at(45)<<line.at(46)<<line.at(47)<<line.at(48)<<line.at(49)<<line.at(50)<<" ";
        myfile<<line.at(52)<<"\n";
        */
        //time
        
        char askBid = line.at(52);
        char indicative = line.at(53);
        if ((askBid==' ')&&(indicative==' ')) {
            myfile<<line.substr(8, 6)<<" "; //time
            myfile<<line.at(27)<<line.at(28)<<line.at(29)<<line.at(30)<<" "; //delivery
            myfile<<line.substr(31, 5)<<" "; // quantity
            myfile<<line.substr(36, 7)<<" ";
            myfile<<line.at(44)<<line.at(45)<<line.at(46)<<line.at(47)<<line.at(48)<<line.at(49)<<line.at(50)<<"\n";
        }
      
        
        // myfile<<line.at(52)<<"\n";
        lineNum++;
        
    }
    cout<< lineNum;
    
}

void bidAskAverage(){
    ifstream inFile ("/Users/retsoom/Documents/Spring2015/FIN580/RMProject/XNYM_BBO_CL_FUT_20150202_20150206.txt");
    string line;
    vector<double> bid;
    vector<double> ask;
    while ((getline (inFile, line))&& (true)) {
        
    }
    
}

int main(){
    
    ReadCsv(0);
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
