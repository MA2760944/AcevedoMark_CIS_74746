/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on October 8, 2017, 7:40 PM
 * Purpose: This program asks for the length and width of two rectangles. 
 * The program then tells the user which rectangle has the greater area, 
 * or if the areas are the same.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library

using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float L1, L2, W1, W2, A1, A2;
    
    //The user inputs length and with of two rectangles.
    cout<<"This program determines which of two rectangles has"<<endl
    <<"the greater area, or if the areas are the same."<<endl;
    cout<<"Enter the length and width of the 1st rectangle:"<<endl;
    cin >>L1>>W1;
    cout<<"Enter the length and width of the 2nd rectangle:"<<endl;
    cin>>L2>>W2;

    //Area of the rectangles.
    A1 = L1 * W1;                       //1st rectangles area
    A2 = L2 * W2;                       //2nd rectangles area

    // Display/Output if-else statement 
    if (A1 == A2)
    cout<<"The areas of both rectangle’s are the same."<<endl;
    else if (A1 > A2)
    cout<<"The area of the 1st rectangle is greater than the 2nd."<<endl;
    else
    cout<< "The area of the 2nd rectangle is greater than the 1st.\n";
    
    //Exit the program
    return 0;
}