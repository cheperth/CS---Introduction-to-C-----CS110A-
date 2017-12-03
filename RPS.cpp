// Rock Paper Scissors program
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
   string Player1;
   string Player2;
      
   cout << "This is Rock Paper Scissors. Choose [R] for Rock [P]" << endl;
   cout << "for Paper and [S] for Scissors." << endl;
   cout << "Player 1 Go!!!!" << endl;
   cin  >>  Player1;
   cout << "Player 2 go!!! [R] for Rock [P] for Paper and [S]" << endl; 
   cout << "for Scissors!!!" << endl;
   cin  >>  Player2;
   
 switch (Player1 == "R" && Player2 == "R")
    {
      case true: 
        cout << "You have a draw." << endl; 
        break; 
    }
    
   if (Player1 == "r" && Player2 == "r" || Player1 == "R" && Player2 == "r" ||     Player1 == "r" && Player2 == "R")
    {
       cout << "You have a draw." << endl; 
    }
   else if (Player1 == "P" && Player2 == "P" || Player1 == "p" && Player2 == "p" || Player1 == "P" && Player2 == "p" || Player1 == "p" && Player2 == "P" )
    {
        cout << "You have a draw." << endl;
    }
   else if (Player1 == "S" && Player2 == "S" || Player1 == "s" && Player2 == "s" || Player1 == "S" && Player2 == "s" || Player1 == "s" && Player2 == "S")
    {
        cout << "You have a draw." << endl; 
    }
   else if (Player1 == "R" && Player2 == "S" || Player1 == "r" && Player2 == "s" || Player1 == "r" && Player2 == "S" || Player1 == "R" && Player2 == "s")
    {
        cout << "Player 1 wins. Rock beats Scissors." << endl;
    }
   else if (Player1 == "R" && Player2 == "P" || Player1 == "r" && Player2 == "p" || Player1 == "R" && Player2 == "p" || Player1 == "r" && Player2 == "P" )
    {
        cout << "Player 2 wins. Paper covers Rock." << endl;
    }
   else if (Player1 == "P" && Player2 =="R" || Player1 == "p" && Player2 == "r" || Player1 == "P" && Player2 == "r" || Player1 == "p" && Player2 == "R")
    {
        cout << "Player 1 wins. Paper covers Rock." << endl;
    }
   else if (Player1 == "P" && Player2 == "S" || Player1 == "p" && Player2 == "s" || Player1 == "P" && Player2 == "s" || Player1 == "p" && Player2 == "S")
    {
        cout << "Player 2 wins. Scissors cuts paper." << endl;
    }
   else if (Player1 == "S" && Player2 == "R" || Player1 == "s" && Player2 == "r" || Player1 == "S" && Player2 == "r" || Player1 == "s" && Player2 == "R")
    {
        cout << "Player 2 wins. Rock smashes Scissors." << endl;
    }
   else if (Player1 == "S" && Player2 == "P" || Player1 == "s" && Player2 == "p" || Player1 == "S" && Player2 == "p" || Player1 == "s" && Player2 == "P")
    {
        cout << "Player 1 wins. Scissor cuts Paper." << endl;
    }
   else if (Player2 == "x")
    {
        cout << "Player2 has chosen invalid move." << endl; 
    }
  else if (Player1 == "w")
    {
       cout << "Player1 has chosen invalid move." << endl; 
    }
 return(0);
}

