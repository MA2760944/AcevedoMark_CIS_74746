/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on September 25, 2017, 6:00 PM
 * Purpose: This program determines the average rainfall for three months.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
#include <string>
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string  mon1,       //First Month
            mon2,       //Second Month
            mon3;       //Third Month 
    
    float   rain1,      //The amount of rain in inches for first month
            rain2,      //The amount of rain in inches for second month
            rain3,      //The amount of rain in inches for third month 
              avg;      //The average of three months
            
    //Display/Output all pertinent variables
    cout<<"Enter the first month: ";
    cin>>mon1;
    cout<<"How much did it rain during "<<mon1<<"?"<<endl;
    cin>>rain1;
    cout<<"Enter the second month: ";
    cin>>mon2;
    cout<<"How much did it rain during "<<mon2<<"?"<<endl;
    cin>>rain2;
    cout<<"Enter the third month: ";
    cin>>mon3;
    cout<<"How much did it rain during "<<mon3<<"?"<<endl;
    cin>>rain3;
    avg=(rain1+rain2+rain3)/3;
    cout<<"The average rainfall for "<<mon1<<" "<<mon2<<" "<<mon3<<" "<<
            "is: "<<fixed<<showpoint<<setprecision(2)<<avg<<"Inches"<<endl;
    //Exit the program
    return 0;
}