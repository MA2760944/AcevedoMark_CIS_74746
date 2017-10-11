/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on October 9, 2017, 4:00 PM
 * Purpose: Change counting game. The program asks the user
 * to enter the number of pennies, nickels, dimes, and quarters. If the total 
 * value of the coins entered is equal to one dollar, the program should 
 * congratulate the user for winning the game. Otherwise, the program should 
 * display a message indicating whether the amount entered was more 
 * than or less than one dollar.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) 
{
	
    //Declare Variables
    int penny, nickel, dime, quarter;       //Declare all coins
    float total = 0;                        //declare the total
    
    //Display/Output all pertinent variables
    cout<<"Please enter the number of pennies: ";
    cin>>penny;
    
    cout<<"Please enter the number of nickels: ";
    cin>>nickel;
    
    cout<<"Please enter the number of dimes: ";
    cin>>dime;
    
    cout<<"Please enter the number of quarters: ";
    cin>>quarter;
//equation for the total    
    total = (penny*0.01)+(nickel*0.05)+(dime*0.10)+(quarter*0.25);      
//If-else statement
   if (total == 1)
   {
        cout<<"Congratulations, you won the game. The amount is exactly $1";
   }   
    else if (total > 1)
   {
        cout<<"The amount is more than $1";
   }
    else
   {
        cout<<"The amount is less than $1";
   }
    //Exit the program
    return 0;
}