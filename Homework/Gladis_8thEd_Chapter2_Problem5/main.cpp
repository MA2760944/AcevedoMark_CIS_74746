/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 16, 2017, 4:30 PM
 * Purpose: This program calculates the average of the values.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int A = 28,                //Numbers are assigned variables
        B = 32,
        C = 37,
        D = 24,
        E = 33,
      sum = A + B + C + D + E, //The sum of all the values  
      avg = sum / 5;//The average equals the sum divided by amount of variables     
    //Display/Output all pertinent variables
    cout<< "The average of 28,32,37,24,and 33 is "<<avg<<endl;
    //Exit the program
    return 0;
}