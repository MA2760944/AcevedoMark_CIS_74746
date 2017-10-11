/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on October 8, 2017, 7:00 PM
 * Purpose: This program asks the user to enter a number within the range of 1 
 * through. It then uses a switch statement to display the Roman numeral version
 * of that number.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int number;
    cout<<"Enter a number: range 1-10"<<endl;
    cin>>number;
    switch (number)
{
case 1:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"I.";
break;
case 2:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"II.";
break;
case 3:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"III.";
break;
case 4:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"IV.";
break;
case 5:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"V.";
break;
case 6:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"VI.";
break;
case 7:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"VII.";
break;
case 8:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"VIII.";
break;
case 9:
cout<<"The Roman numeral symbol for  " <<number<<" is ";
cout<<"IX.";
break;
case 10:
cout<<"The Roman numeral symbol for " <<number<<" is ";
cout<<"X.";
break;
default: cout <<"The range is from 1 through 10. Try again. "; break;
}
    //Exit the program
    return 0;
}