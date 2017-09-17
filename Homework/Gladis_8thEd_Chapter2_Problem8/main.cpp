/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 16, 2017, 5:00 PM
 * Purpose: This program determines the total of a purchase with a sales
 * tax of 7%.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;   //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float it1 = 15.95,                //Item one cost $15.95
          it2 = 24.95,                //Item two cost $24.95
          it3 = 6.95,                 //Item three cost $6.95
          it4 = 12.95,                //Item four cost $12.95
          it5 = 3.95,                 //Item five cost $3.95
          sub = it1+it2+it3+it4+it5,  //Subtotal of all items
           st = sub * 0.07,           //Sales tax at 7% 
           tt = sub + st;             //Total cost after tax
    //Display/Output all pertinent variables
    cout<<"Item 1 $"<<it1<<endl;
    cout<<"Item 2 $"<<it2<<endl;
    cout<<"Item 3 $"<<it3<<endl;
    cout<<"Item 4 $"<<it4<<endl;
    cout<<"Item 5 $"<<it5<<endl;
    cout<<"Subtotal $"<<sub<<endl;
    cout<<"Sales tax at 7% is $"<<st<<endl;
    cout<<"Total $"<<tt<<endl; 
    //Exit the program
    return 0;
}