/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on August 25, 2017, 4:05 PM
 * Purpose: This program determines the average test score
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   score1,     //Test score number one
            score2,     //Test score number two
            score3,     //Test score number three 
            score4,     //Test score number four
            score5,     //Test score number five
               avg;     //Average of five test scores    
    //Display/Output all pertinent variables
    cout<<"Enter 1/5 test score: ";
    cin>>score1;
    cout<<"Enter 2/5 test score: ";
    cin>>score2;
    cout<<"Enter 3/5 test score: ";
    cin>>score3;
    cout<<"Enter 4/5 test score: ";
    cin>>score4;
    cout<<"Enter 5/5 test score: ";
    cin>>score5;
    avg = (score1+score2+score3+score4+score5)/5; 
    cout<<"The average of the five test scores is: "
    <<fixed<<showpoint<<setprecision(1)<<avg<<endl;
    //Exit the program
    return 0;
}