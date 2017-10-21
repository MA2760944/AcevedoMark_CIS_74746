/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 10, 2017, 2:30 PM
 * Purpose: This program asks the user for a positive integer value. 
 * The program then uses a loop to get the sum of all the integers from 1
 * up to the number entered.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num = 0;        //Declare NUMBER   
    int sum = 0;        //Declare SUM
    
    //Output with initialized variables 
    cout<<"Enter how many numbers you'd like to sum up"<<endl;
    cin>>num;
    
    while (num < 0)    //While statement to refuse all negative integers 
    {
        cout<<"Please enter a positive integer "<<endl;
        cin>>num;
    }
    
    for (int i =1; i <= num; i++)   //For initialization of variables 
    {
        sum +=i; 
    }
    cout<<"The sum: "<<sum;        //Output the total sum
    
    return 0;
}