/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 16, 2017, 3:00 PM
 * Purpose:  This  program calculates the tax and tip of a restaurant meal
 * charge of $88.67. With that tax being 6.75% and the tip at 20%.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;   //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cosM = 88.67,                    //Cost of the meal
          tax  = 0.0675 * cosM,            //The tax is 6.75% of the meal cost 
          tip  = (cosM + tax) * 0.20,      //20% tip after tax   
         total = cosM + tax + tip;          //Total meal cost with tax and tip
    //Display/Output all pertinent variables
    cout<<"Meal cost $"<<cosM<<endl;
    cout<<"Tax at 6.75% is $"<<tax<<endl;
    cout<<"Tip at 20% is $"<<tip<<endl;
    cout<<"Total amount is $"<<total<<endl;
    //Exit the program
    return 0;
}