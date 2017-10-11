/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 26, 2017, 5:00 PM
 * Purpose: This program converts US dollar amounts to Yen and then to Euros.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const float YEN_PER_DOLLAR = 112.33;        //Conversion rate for yen
    const float EUROS_PER_DOLLAR = 1.18;        //Conversion rate for euros
    float   dollar,         //Amount of dollars 
            yen,            //Amount of yen
            euros;          //Amount of euros
    //Display/Output all pertinent variables
    cout<<"How many US dollars $";
    cin>>dollar;
    yen = dollar * YEN_PER_DOLLAR;
    euros = dollar * EUROS_PER_DOLLAR;
    cout<<"You have "<<fixed<<showpoint<<setprecision(2)<<yen<<" yen"<<endl;
    cout<<"You have "<<fixed<<showpoint<<setprecision(2)<<euros<<" euros"<<endl;
    //Exit the program
    return 0;
}