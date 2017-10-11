/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on September 25, 2017, 1:30 PM
 * Purpose: This program determines the total revenue of ticketed seats in
 * a stadium.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Manipulator
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float aSeat=15.00,     //A seats cost $15 a seat
          bSeat=12.00,    //B seats cost $12 a seat
          cSeat=9.00,    //C seats cost $9  a seat
          aSold,     //Amount of A tickets sold
          bSold,    //Amount of B tickets sold
          cSold,   //Amount of C tickets sold
          total;  //Total amount of revenue $
          
    //Display/Output all pertinent variables
    cout<<"Soft ball tickets sold: "<<endl;         
    cout<<"Tickets A15  B12  C9"<<endl;             //Ticket prices 
    cout<<"Enter amount of A tickets sold: ";       //aSold
    cin>>aSold;
    cout<<"Enter amount of B tickets sold: ";       //bSold
    cin>>bSold;
    cout<<"Enter amount of C tickets sold: ";       //cSold
    cin>>cSold;
    total= (aSeat*aSold)+(bSeat*bSold)+(cSeat*cSold);
    cout<<"Income Generated : $";
    cout <<fixed<<showpoint<<setprecision(2)<<total<<endl;

    //Exit the program
    return 0;
}