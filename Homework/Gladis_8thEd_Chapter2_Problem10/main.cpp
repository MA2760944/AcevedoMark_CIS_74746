/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 16, 2017, 8:00 PM
 * Purpose: This program calculates the amount of miles per gallon a car 
 * gets with 15 gallons of gasoline. The vehicle can travel 375 miles before
 * needing to refuel.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int gal = 15,       //Vehicle has 15 gallons of gasoline
        mil = 375,      //It can travel 350 miles before refueling
        mpg = mil/gal;   //Miles per gallon formula    
    //Display/Output all pertinent variables
    cout<<"A vehicle with "<<gal<<" gallons of gas"<<endl;
    cout<<"That can travel "<<mil<<" miles before needing to refuel"<<endl;
    cout<<"Gets "<<mpg<<" Miles per gallon"<<endl;
    //Exit the program
    return 0;
}