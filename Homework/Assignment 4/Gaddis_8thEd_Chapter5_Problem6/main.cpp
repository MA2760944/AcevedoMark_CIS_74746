/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 12, 2017, 1:00 PM
 * Purpose: This program asks the user for the speed of a vehicle
 * (in miles per hour) and how many hours it has traveled. The program
 * then uses a loop to display the distance the vehicle has traveled for
 * each hour of that time period. Input Validation: Do not accept a negative 
 * number for speed and do not accept any value less than 1 for time traveled. 
 * The distance a vehicle travels can be calculated as follows:distance = speed * time
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float time;                    //Declare TIME
    float dist;                    //Declare DISTANCE
    float speed;                   //Declare SPEED
    
    //Display/Output all pertinent variables
    cout<<"What is the speed of the vehicle? ";
    cin>>speed;                                 //User input
    
    while (speed <=0)              //While statement for speed of vehicle 
    {
        cout<<"Speed has to be greater than zero...";
        cin>>speed;                             //User input       
    }
    cout<<"How many hours did it travel?";
    cin>>time;
    
    while (time < 1)              //While statement for time traveled 
    {
        cout<<"Time mist be greater than zero...";
        cin>>time;
    }
    cout<<"\nHour\tDistance Traveled\n";
    cout<<"----------------------------\n";
    
    for (int i =1; i<= time; i++)   //For total distance traveled loop
    {
        dist = speed * i;
        cout<<i<<"\t\t"<<dist<<endl;
    }
    
    //Exit the program
    
    return 0;
}