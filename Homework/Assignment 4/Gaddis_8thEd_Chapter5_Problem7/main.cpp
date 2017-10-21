/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 12, 2017, 6:00 PM
 * Purpose: This program calculates how much a person would earn over a period
 * of time if his or her salary is one penny the first day and two pennies the
 * second day, and continues double each day. The program asks the user 
 * for the number of days. It then displays a table showing how much the salary 
 * was for each day, and then show the total pay at the end of the period. 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int numDys = 1;                 //Declare NUMBER OF DAYS
    float money = 1.0;              //Declare MONEY
    float total = 0.0;              //Declare TOTAL
    float dayPay = 0.0;             //Decalre DAYPAY
    //User input
    cout<<"Please enter the total number of days"<<endl;
    cin>>numDys;
    
    while (numDys < 1)                  //While statement for input check
    {
        cout<<"Enter a valid number of days"<<endl;
    }
    
    for (int i = 1; i <= numDys; i++)  //For statement for pennies earned
    {
        dayPay = money / 100; 
        cout<<"Day "<<i<<" Total earnings: $"<<dayPay<<endl;
        total += dayPay; 
        money *= 2;
    }
    cout<<"Total Earnings $"<<total<<endl;
 
    //Exit the program
    
    return 0;
}