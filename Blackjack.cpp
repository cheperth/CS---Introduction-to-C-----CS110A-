/*
Che Perth 
CS110B
1/26/2018
a2_1.cpp 
a2_1.cpp is a Blackjack program that gives the user 2 cards and asks the user 
if they want another card. While the user responds with y the proram will keep 
giving the user new cards. If the total reaches 21 the program says congratulations
as asks to user to play again. If the total is over 21 the program says bust and asks 
the user to play again. If the user does not want another card the program resets and 
gives the user 2 brand new cards with a brand new total. 
*/

#include <iostream> 
#include <cstdlib> 
#include <iomanip> 
#include <ctime>

using namespace std; 

int main() 
{ //open main
 srand(static_cast<unsigned>(time(0)));
 
 int total = 0, num = 1, current = rand()%11; /*variables for total,
 card, and num.*/ 
 
 char goAgain = 'y',playAgain = 'y', playAgain2 = 'y'; //variables
 
  do/*while loop to repeat num == 1 && playAgain == 'y' && 
  playAgain != 'n' 
   && playAgain2 == 'y' Infinite loop*/ 
  {
   total = 0; //reset total 
   current = rand()%11; //card variable
   
   for(int i = 0; i < 1; i++)//for loop for outputting string "First cards:"
   {
     total = 0; //reset total
     cout << "First cards: " << endl; //output
   }
   for(int i = 0; i < 1; i++) /*for loop for outputting first two cards,
   outputting total,keeping total */
   {
    cout << "Card:" << current << ","; 
    
    total+=current; /*appears throughout code to keep count of total 
    based on cards being outputted*/ 
    
    cout << current << endl; //output card 
    
    total+=current; //update total 
    
    cout << "Total:" << total << endl;  //output total 
   
   }
  
  while(total < 21 && goAgain == 'y')  /*keep prompting the user as 
  long as total < 21 and goAgain == 'y'*/ 
   {
     cout << "Do you want another card?(y/n):" << endl; /*Prompt user to 
     go again.*/ 
      cin  >> goAgain;//take in user input to go again or not 
      
    while(goAgain == 'n')/*resets the game while user "stays" and 
    outputs 2 brand new cards with new total and asks user if they 
    new card and allows them to replay game.*/ 
    {
      total = 0; //refesh total
      
      playAgain == 'y'; //make do loop at beginnig of program true

      playAgain2 == 'y'; //make do loop at beginning of program true

      cout << "First cards: " << endl;//output first cards string 

      current = rand()%11;//card variable uninitialized to random

      cout << "Card:" << current << ","; //output card 

      total+=current;//update total 

      cout << current << endl; //output card 

      total+=current;//update total 

      cout << "Total:" << total << endl; //output total 

      cout << "Do you want another card?(y/n):" << endl; /*ask user if 
      they want to go again.*/ 
      
      cin  >> goAgain;//store user input for go again
    }
    current = rand()%11;//card variable uninitialized to random 
    
    cout << "Card:" << current << endl; //output card 
   
    total+=current; //update total 
    
    cout << "Total:" << total << endl;//output total 
    
for(int x = 0; x < 1; x++)
{
     if(total == 21 && total > 20 && total < 22)
       { 
       /*if total is 21 prints out congratulations and asks 
       user to play again.*/ 
  
         cout << "congratulations!:" << endl; //output congrats
      
         cout << "Do you want to play again?(y/n):" << endl; /*Ask user
         to play again.*/ 
       
         cin  >> playAgain2; //stores user input for play again
       }
}

     for(int i = 0; i < 1; i++)
     {//if total is greater than 21 output Bust and ask user to play again.
      if(total > 21 && total == 22 || total == 23 || total == 24 
      || total == 25 || total == 26|| total == 27 || total == 28 
      || total == 29 || total == 30)
       {
         cout << "Bust." << endl; //output bust 
        //ask user to play again
        
         cout << "Do you want to play again?(y/n):" << endl; 
         
         cin  >> playAgain; //store user input for play again. 
       }
      }
     }
    //condition for do while loop at beginning to remain true.
   }while(num ==1 && playAgain == 'y' && playAgain != 'n' 
   && playAgain2 == 'y' );
}
