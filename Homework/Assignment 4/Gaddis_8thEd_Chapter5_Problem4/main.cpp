/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 10, 2017, 5:00 PM
 * Purpose:This program uses a loop to display the number of calories burned
 * after 5, 10, 15, 20, 25, and 30 minutes of running on a treadmill. 
 * Running on a particular treadmill burns about 3.6 calories per minute.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float cBurn;                    //Declare CALORIES BURNED
    float cPrMn = 3.9f;             //Declare CALORIES BURNED PER MIN
    
    for (int i = 10; i<=30; i+=5)   //For statement for calories burned
    {
        cBurn = i * cPrMn;
        cout<<"In "<<i<<"minutes you burned "<<cBurn<<" calories.\n";
    }
    //Exit the program
   
    return 0;
}