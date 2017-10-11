/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 26, 2017, 3:15 PM
 * Purpose: This program determines how many total calories were consumed
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float       cook,       //Amount of cookies ate
                total;      //Total calories consumed 
    //Display/Output all pertinent variables
 /*
 30 cookies in a bag = 10 servings
 300 calories * 10 servings = 3000 calories
 30 cookies = 3000 calories
 1 cookie = 1/3 serving = 100 calories
 */
    cout<<"How many cookies have you ate? ";
    cin>>cook;
    total = cook * 100;
    cout<<"You ate a total of "<<total<<" calories"<<endl;
    //Exit the program
    return 0;
}