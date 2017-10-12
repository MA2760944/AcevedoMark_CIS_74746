/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on October 8, 2017, 5:00 PM
 * Purpose: This program determines which number is smaller and larger
 * between two numbers. 
 * .
 */
//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int value1, value2;
    //Display/Output all pertinent variables
    cout<<"Please enter a whole number"<<endl;
    cin>>value1;
    cout<<"Enter a second whole number"<<endl;
    cin>>value2;
    if (value1>value2)
    {
        cout<<value1<<" is greater than "<<value2<<endl;
    }
    if (value1<value2)
    {
        cout<<value1<<" is less than "<<value2<<endl;
    }

    //Exit the program
    return 0;
}