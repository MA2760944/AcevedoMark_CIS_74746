/* 
 * File:   main.cpp
 * Author: Mark Acevedo 
 * Created on October 8, 2017, 7:40 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <string>       //String options for if-else
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) 
{
//Declare variables
float Time1, Time2, Time3;      //Time the runners finished 
string R1;                      //String options R1,R2,R3 
string R2;
string R3;

//User input
cout<<"Who won?"<<endl;
cout<<"Name of the fist runner? "<<endl;
cin>>R1;
cout<<"How long did "<<R1<<" take to finish the race? "<<endl;
cin >>Time1;
cout<<"Name of the second runner? "<<endl;
cin>>R2;
cout<<"How long did " <<R2<< " take to finish the race? "<<endl;
cin >>Time2;
cout<<"Name of the third runner? "<<endl;
cin>>R3;
cout<<"How long did "<<R3<<" take to finish the race? "<<endl;
cin>>Time3;

//If-else statement for runners
if (Time1 > 0 && Time2 > 0 && Time3 > 0)
    if (Time1 < Time2 && Time1 < Time3)
	if (Time2 < Time3)
	{
	cout<<"First place : "<<R1<<endl;
	cout<<"Second place: "<<R2<<endl;
	cout<<"Third place : "<<R3<<endl;
	}
	else 
	{
	cout<<"First place : "<<R1<<endl;
	cout<<"Second place: "<<R3<<endl;
	cout<<"Third place : "<<R2<<endl;
	}
else if (Time2 < Time1 && Time2 < Time3)
	if (Time1 < Time3)
	{
	cout<<"First place : "<<R2<<endl;
	cout<<"Second place: "<<R1<<endl;
	cout<<"Third place : "<<R3<<endl;
	}
	else
	{
	cout<<"First place : "<<R2<<endl;
	cout<<"Second place: "<<R3<<endl;
	cout<<"Third place : "<<R1<<endl;
	}
	else 
            if (Time1 < Time2)
            {
	cout<<"First place : "<<R3<<endl;
	cout<<"Second place: "<<R1<<endl;
	cout<<"Third place : "<<R2<<endl;
	}
	else
	{
	cout<<"First place : "<<R3<<endl;
	cout<<"Second place: "<<R2<<endl;
	cout<<"Third place : "<<R1<<endl;
	}
	else
	cout<<"Invalid! Cannot be lees than zero."<<endl;
	
    //Exit the program
    return 0;
}