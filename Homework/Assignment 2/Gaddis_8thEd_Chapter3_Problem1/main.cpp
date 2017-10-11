/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 25, 2017, 1:00 PM
 * Purpose: This program determines a car's gas mileage. 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float        tank,      //The amount of gas the car cad hold in gallons
                 miles,     //The maximum amount of miles before re-fueling
                   mpg;     //Miles per gallon
    
    //Display/Output all pertinent variables
    cout<<"Enter the amount of gas your vehicle can hold in gallons: ";
    cin>>tank;             //Asks user to declare max gallons
    cout<<"How many miles can your vehicle go an a full tank? ";
    cin>>miles;            //Asks user to declare max miles
    mpg = miles/tank;      //Miles per gallon equals miles dived by tank
    cout<<"The car's MPG is : "<< mpg <<endl;
    
    //Exit the program
    return 0;
}