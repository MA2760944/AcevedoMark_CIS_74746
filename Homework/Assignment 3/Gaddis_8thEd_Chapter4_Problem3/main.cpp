/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 16, 2017, 3:00 PM
 * Purpose: This program asks the user to enter a month (in numeric form), 
 * a day, and a two-digit year. The program then determine whether 
 * the month times the day is equal to the year.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare variables 
    int month, day, year;               //Declaring month, day , & year.
    
    //Display/Output all pertinent variables
    cout<<"Enter (in numeric form) a month, a day, and a two digit year,\n"
    <<"and the program will determine if the date is magic.\n";
    cout<<"Enter a month: ";       
    cin>>month;
    cout<<"Enter a day: ";              //User input month , day, & year.
    cin>>day;
    cout<<"Enter a Year: ";
    cin>>year;
        if (year == month * day)        //If else statement 
		cout<<"The date is magic"<<endl;
	else
		cout<<"The date is not magic"<<endl;
    
    //Exit the program
    return 0;
}