/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on October 9, 2017, 8:00 PM
 * Purpose This program calculates and displays a person’s body mass index (BMI)
 * The program then displays a message indicating whether the person has optimal
 * weight, is underweight, or is overweight.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //For calculations 
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) 
{
//Declare all variables
float weight,           //Declare weight, height, and BMI.
       height,
          BMI;
		   
//User input/Display
cout<<"Body Mass Index Calculator"<<endl;
cout<<"Please enter your weight-pounds: ";
cin>>weight;
cout<<"Please enter your height-inches: ";
cin>>height;

//Calculations
BMI = weight * (703 / pow(height, 2));

//User body mass index
cout<<"Your BMI is "<<BMI<< endl;
if (BMI >= 18.5 && BMI <= 25)
    cout << "You have optimal weight.\n";
else if (BMI >= 25)
    cout << "You are overweight.\n";
else
    cout << "You are underweight.\n";

    return 0;
}