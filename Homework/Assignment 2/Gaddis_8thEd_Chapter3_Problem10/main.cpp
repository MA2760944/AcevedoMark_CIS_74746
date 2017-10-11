/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 26, 2017, 1:00 PM
 * Purpose: This program determines the minimum amount of home insurance
 * one should buy.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float rCost,
            mm;
    //Display/Output all pertinent variables
    cout<<"Enter replacement cost of a building :";
    cin>>rCost;
    mm = rCost*0.8;
    cout<<"Your minimum amount of insurance :"<<fixed<<showpoint<<setprecision(2)<<mm<<endl;
    //Exit the program
    return 0;
}