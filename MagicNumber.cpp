/*
Che Perth 
CS110B
1/16/2018
a1_1.cpp 
a1_1.cpp takes in 3 user inputs for month, day and year and returns true if the 
day multiplied by the month equals the year. If true the program outputs 
"The date is magic". If the day multiplied by the month does not equal the year 
then the program outputs "The date is not magic". The progam prompts the user for 
the inputs for month, day and year in a two digit format , stores the user inputs into 
integer variables named month, day, year, uses a boolean if statement that outputs 
"The date is magic" if the day multiplied by the month equals the year. If the day 
multiplied by the month does not equal the year the program outputs "The date is not magic". 
*/ 
#include <iostream>


using namespace std;

int main()
{
    
    int month; //variable declaration month
    int day;   //variable declaration day
    int year;  //variable declaration year 

    cout << "Please enter in the month as an integer:" << endl;             //prompt user for input month
    cin  >> month;                                            //store user input in month variable
    cout << "Please enter in the day as an integer:" << endl;               //prompt user for input day 
    cin  >> day;                                              //store user input in day variable 
    cout << "Please enter in 2 digits for the year as an integer:" << endl; //prompt user for year input 
    cin  >> year;                                             //store user input in year variable
    
     /*
     boolean if statement testing day                                                           
     variable multiplied by month variable
     to year variable for equality to year variable
     */ 
    if(day * month == year)
    {                                                           
      cout << "The date is magic." << endl;                   //output if day * month equals year
    }
    else                                                      
    {
      cout << "The date is not magic." << endl;             //output if day * month does not equal year
    }
    
    return 0;                                                 //return statement
 }
