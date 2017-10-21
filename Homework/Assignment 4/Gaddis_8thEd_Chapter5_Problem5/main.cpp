/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 15th, 2017, 5:00 PM
 * Purpose: A country that charges $2,500 per year for
 * membership, has announced it will increase its membership fee by 4% 
 * each year for the next six years. This program uses a loop to
 * display the projected rates for the next six years.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare constants and variables
    const float incr = 0.04;        //Declare 4% increase for the next 6 years
    const int yrs = 6;              //Declare int years for output
    float memb = 2500;              //Declare initial $2500 membership fee

    for (int i = 1; i <= yrs; i++)  //Loop for projected rates 
    {
     memb = memb + (memb * incr); 
     cout<<"Year "<<i<<" fees: $"<<memb<<endl;  //Output loop for next 6 years
    }  
    return 0;
}