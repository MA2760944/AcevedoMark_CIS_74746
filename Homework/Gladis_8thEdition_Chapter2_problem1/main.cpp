/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on September 14th, 2017, 8:00 AM
 * Purpose:  This program stores integers 50 and 100 in variables,
 * //and stores the sum of the two in a variable named total
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int     x = 50,     //50 is stored in variable x
            y = 100,    //100 is stored in variable y
            total;      // Total is declared
    //Input Data/Variables
     total = x + y;       
       //Display/Output all pertinent variables
    cout << "x = 50 " << endl;
    cout << "y = 100 " << endl;
    cout << "x+y = total " << endl;
    cout << "total = " << total << endl;
    //Exit the program
    return 0;
}