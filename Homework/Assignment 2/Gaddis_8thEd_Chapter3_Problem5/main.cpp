/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on September 5, 2017, 7:01 PM
 * Purpose: This program determines the percentages of men and females
 * in a classroom.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float           male,       //Number of males in class
                    fmale,      //Number of females in class
                    nStud,      //Number of students in class
                    perM,       //Percentage of males in class
                    perF;       //Percentage of females in class
    
    //Display/Output all pertinent variables
    
    cout<<"How many students are enrolled in the class ?: ";
    cin>>nStud;                     //Enter number of students
    cout<<"How many of those students are females? :";
    cin>>fmale;                     //Enter number of females
    cout<<"How many are males? :";
    cin>>male;                      //Enter number of males
    perF = fmale/(fmale+male)*100;  //Percentage of females equation
    cout<<"The percentage of females in your class is "<<fixed<<showpoint<<
            setprecision(2)<<perF<<"%"<<endl;
    perM = male/(male+fmale)*100;   //Percentage of males equation
    cout<<"The percentage of males in your class is "<<fixed<<showpoint<<
            setprecision(2)<<perM<<"%"<<endl;
    //Exit the program
    return 0;
}