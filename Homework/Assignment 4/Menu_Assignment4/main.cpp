/* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 20th, 2017, 8:00 PM
 * Purpose:  Menu for assignment 4
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
        //Input Data/Variables
        cout<<"Choose from the Menu"<<endl;
        cout<<"1. Problem 1"<<endl;
        cout<<"2. Problem 2"<<endl;
        cout<<"3. Problem 3"<<endl;
        cout<<"4. Problem 4"<<endl;
        cout<<"5. Problem 5"<<endl;
        cout<<"6. Problem 6"<<endl;
        cout<<"7. Problem 7"<<endl;
        cin>>choice;
        //Process or map the inputs to the outputs
        switch(choice){
            case 1:{
                cout<<"You are in Problem 1"<<endl;
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
    //Exit program
                break;
            }
            case 2:{
                cout<<"You are in Problem 2"<<endl;
                /* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 10, 2017, 3:30 PM
 * Purpose: This program displays a table showing 
 * the number of millimeters that the ocean will have risen each year 
 * for the next 25 years. Assuming the ocean’s level is currently rising 
 * at about 1.5 millimeters per year, 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float total = 0;                    //Declare TOTAL 
    int years = 25;                     //Declare initial for the next 25 YEARS
    
    for (int i =1; i <= years; i++)     //For statement for ocean level loop
    {
        total += 1.5;
        cout<<"Ocean level: year "<<i<<": Risen a total of "<<total<<"mm\n";
    }
    //Exit the program
                break;
            }
            case 3:{
                cout<<"You are in Problem 3"<<endl;
                /* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 10, 2017, 5:00 PM
 * Purpose:This program uses a loop to display the number of calories burned
 * after 5, 10, 15, 20, 25, and 30 minutes of running on a treadmill. 
 * Running on a particular treadmill burns about 3.6 calories per minute.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float cBurn;                    //Declare CALORIES BURNED
    float cPrMn = 3.9f;             //Declare CALORIES BURNED PER MIN
    
    for (int i = 10; i<=30; i+=5)   //For statement for calories burned
    {
        cBurn = i * cPrMn;
        cout<<"In "<<i<<"minutes you burned "<<cBurn<<" calories.\n";
    }
    //Exit the program
 
                break;
            }
            case 4:{
                cout<<"You are in Problem 4"<<endl;
                /* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 15th, 2017, 5:00 PM
 * Purpose: A country that charges $2,500 per year for
 * membership, has announced it will increase its membership fee by 4% 
 * each year for the next six years. This program uses a loop to
 * display the projected rates for the next six years.
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare constants and variables
    const float incr = 0.04;        //Declare 4% increase for the next 6 years
    const int yrs = 6;              //Declare int years for output
    float memb = 2500;              //Declare initial $2500 membership fee

    for (int i = 1; i <= yrs; i++)  //Loop for projected rates 
    {
     memb = memb + (memb * incr); 
     cout<<"Year "<<i<<" fees: $"<<memb<<endl;  //Output loop for next 6 years
    }  
                break;
            }
            case 5:{
                cout<<"You are in Problem 5"<<endl;
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
   
                break;
            }
            case 6:{
                cout<<"You are in Problem 6"<<endl;
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
                break;
            }
            case 7:{
                cout<<"You are in Problem 7"<<endl;
                /* 
 * File:   main.cpp
 * Author: Mark Acevedo
 * Created on October 12, 2017, 6:00 PM
 * Purpose: This program calculates how much a person would earn over a period
 * of time if his or her salary is one penny the first day and two pennies the
 * second day, and continues double each day. The program asks the user 
 * for the number of days. It then displays a table showing how much the salary 
 * was for each day, and then show the total pay at the end of the period. 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int numDys = 1;                 //Declare NUMBER OF DAYS
    float money = 1.0;              //Declare MONEY
    float total = 0.0;              //Declare TOTAL
    float dayPay = 0.0;             //Decalre DAYPAY
    //User input
    cout<<"Please enter the total number of days"<<endl;
    cin>>numDys;
    
    while (numDys < 1)                  //While statement for input check
    {
        cout<<"Enter a valid number of days"<<endl;
    }
    
    for (int i = 1; i <= numDys; i++)  //For statement for pennies earned
    {
        dayPay = money / 100; 
        cout<<"Day "<<i<<" Total earnings: $"<<dayPay<<endl;
        total += dayPay; 
        money *= 2;
    }
    cout<<"Total Earnings $"<<total<<endl;
 
                break;
            }
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<8);
    
    //Exit the program
    return 0;
}