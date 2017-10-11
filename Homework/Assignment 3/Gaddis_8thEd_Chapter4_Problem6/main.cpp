/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on October 9, 2017, 9:00 PM
 * Purpose: This program asks the user to enter an object’s mass, and 
 * then calculates and displays its weight. If the object weighs more than
 * 1,000 newtons, a message indicating that it is too heavy. If the 
 * object weighs less than 10 newtons, a message indicating that the 
 * object is too light.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) 
{
    
//Declare Variables
int mass;                   //Declared mass and weight
float weight;

//Display
cout<<"Enter objects mass: "<<endl;
cin>>mass;

//Calculations 
weight = mass * 9.8;
 
//If-else statement
 if(mass>=1000)
 {
 cout<<"The mass is over 1000 newtons- its too heavy "<<mass<<endl;
 }
 else if(mass<=10)
 {
 cout<<"The mass is under 10 newtons- its too light"<<mass<<endl;
 }
 cout<<"The objects weight is: "<<weight<<endl;

    return 0;
}