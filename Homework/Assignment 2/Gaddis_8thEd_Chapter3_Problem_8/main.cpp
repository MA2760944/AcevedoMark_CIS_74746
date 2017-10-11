/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on September 25, 2017, 9:15 PM
 * Purpose: This program determines how many widgets can fit on a pallet.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   ww,            //Widget weight 12.5 1bs
            pe,            //Pallet weight when empty
            pw,            //Pallet weight with widgets
            nw;            //Number of widgets
    //Display/Output all pertinent variables
    cout<<"Enter the weight of the pallet :";
    cin>>pe;
    cout<<"Enter the weight of the pallet with widgets :"<<endl;
    cin>>pw;
    ww= 12.5;               //Weight of a single widget
    nw=(pw-pe)/ww;          //Equation for amount of widgets on pallet
    cout<<"The number of widgets on the pallet is "<<fixed<<showpoint<<
            setprecision(0)<<nw<<endl;
    //Exit the program
    return 0;
}