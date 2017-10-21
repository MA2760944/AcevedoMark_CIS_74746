/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 10, 2017, 3:30 PM
 * Purpose: This program displays a table showing 
 * the number of millimeters that the ocean will have risen each year 
 * for the next 25 years. Assuming the ocean’s level is currently rising 
 * at about 1.5 millimeters per year, 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float total = 0;                    //Declare TOTAL 
    int years = 25;                     //Declare initial for the next 25 YEARS
    
    for (int i =1; i <= years; i++)     //For statement for ocean level loop
    {
        total += 1.5;
        cout<<"Ocean level: year "<<i<<": Risen a total of "<<total<<"mm\n";
    }
    //Exit the program
    
    return 0;
}