/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on September 16, 2017, 2:00 PM
 * Purpose:  This program determines the total sales tax on a $95
 * dollar purchase. With a sales tax of 4 percent and a county 
 * sales tax at 2 percent. 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;   //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int purch = 95;
    float sTax = 0.04 * purch,      //Sales tax is 4%
          cTax = 0.02 * purch,     //County tax is 2%
            tt = sTax + cTax;     //Total tax equals sales plus county tax
    //Display/Output 
          cout << "The total sales tax on a $" <<purch<<" purchase is $"
                  <<tt<<endl;
    //Exit the program
    return 0;
}