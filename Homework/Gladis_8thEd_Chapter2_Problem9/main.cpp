/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 16, 2017, 7:10 PM
 * Purpose: This program displays the amount of memory
 * a char, int, float, and double has. 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Display/Output 
    cout<<"Size of char: "<<sizeof(char)<<"byte"<<endl;
    cout<<"Size of int: "<<sizeof(int)<<"byte"<<endl;
    cout<<"Size of float: "<<sizeof(float)<<"byte"<<endl;
    cout<<"Size of double: "<<sizeof(double)<<"byte"<<endl;
    //Exit the program
    return 0;
}