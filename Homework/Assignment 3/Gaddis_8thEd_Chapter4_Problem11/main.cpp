/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on October 9, 2017, 5:00 PM
 * Purpose: This program asks the user to enter the answer for a problem. 
 * If the answer is correct, a message of congratulations should be printed. 
 * If the answer is incorrect, a message is printed showing the correct answer.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <ctime>        //For number generator-random 
#include <iomanip>      //Manipulate input
#include <cstdlib>      //Include library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare Variables
    int rnum1, rnum2;           //Random number 1 and 2
    int total, comTot;          //User total and computer total
    int seed = time(0);         //For number generator 
    //Random generator
    srand(seed);                //Strand seed for generator 
    
    rnum1 = 1 + rand() % 100;
    rnum2 = 1 + rand() % 100;
    
    comTot = rnum1 + rnum2;          //Equation for right answer
    cout<<setw(5)<<rnum1<<endl;      //Manipulate 
    cout<<setw(3)<<"+"<<rnum2<<endl;
    cout<<"-----\n";
    cin>>total;
    
    //If-else statement 
    if (total == comTot)
        cout<<"NICE! You got it."<<endl;
    else
        cout<<"Sorry. Thats not right. The correct answer is "<<comTot<<endl;
    
    //Exit the program
    return 0;
}