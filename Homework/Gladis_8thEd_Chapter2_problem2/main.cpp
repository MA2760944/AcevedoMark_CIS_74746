/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on September 16, 2017, 1:00 AM
 * Purpose:  The East Coast sales division of a company generates 58 percent of
 * total sales. This program will determine how much the East Coast division
 * will generate if the company has $8.6 million in sales this year.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Global Constants - Not variables only Math/Science/Conversion constants

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float gPoTs = .58;          //Generates 58% of total sales
    int   gTotS = 8600000,      //Generates 8.6 mil in total sales      
          pEar = gPoTs * gTotS; //Determines pEar_Predicted earnings
    //Display/Output all pertinent variables
    cout << "The East Coast Sales Division is predicted to generate $";
    cout <<pEar<<" in total sales this year."<<endl;
    //Exit the program
    return 0;
}