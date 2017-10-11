/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 26, 2017, 2:12 PM
 * Purpose: This program determines the total cost of an automobile
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   loan,       //Monthly loan cost
            ins,        //Monthly insurance cost
            gas,        //Monthly gas cost
            oil,        //Monthly oil cost
            tire,       //Monthly tire cost
            main,       //Monthly maintenance cost
            mc,         //Monthly cost of automobile
            yc;         //Yearly cost of automobile
    //Display/Output all pertinent variables
    cout<<"Enter your monthly loan payment :";
    cin>>loan;
    cout<<"Enter your monthly insurance payment :";
    cin>>ins;
    cout<<"Enter your monthly gas cost :";
    cin>>gas;
    cout<<"Enter your monthly oil cost :";
    cin>>oil;
    cout<<"Enter your monthly tire cost :";
    cin>>tire;
    cout<<"Enter your monthly maintenance cost :";
    cin>>main;
    mc = loan+ins+gas+oil+tire+main;
    cout<<"Your monthly spending on your automobile is: "<<fixed<<showpoint<<
            setprecision(2)<<mc<<endl;
    yc = (loan+ins+gas+oil+tire+main)*12;
    cout<<"Your yearly spending on your automobile is: "<<fixed<<showpoint<<
            setprecision(2)<<yc<<endl;
    //Exit the program
    return 0;
}