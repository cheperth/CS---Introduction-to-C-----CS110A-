/*This program outputs monthly bank charges based on your beginning
balance and the amount of checks that were written as well as Overdraft
notification.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip> 

using namespace std;

int main()
{
   double balance;
   int checks;
   
   cout << "What is the beginning balance?" << endl;
   cin  >> balance;
   cout << "How many checks were written this month?" << endl;
   cin  >> checks;
    
   if (balance < 0)
 	{
  	if (checks < 0)
   	{
     	cout << " Account is overdrawn! " << endl;
     	cout << " The number of checks written must be 0 or greater." << endl;
     	exit(0);
   	}
 	}

   if (balance < 0.0)
 	{
 	if (checks >= 0)
   	{
     	cout << " Account is overdrawn! " << endl;
     	exit(0);
   	}
 	}

  if (balance > 0)
 	{
  	if (checks < 0)
    	{
      	cout << "Number of checks written must be 0 or greater." << endl;
      	exit(0);
    	}
}
   
   if (balance < 400)   /*For balances under 400 $10 monthly fee and $25 low balance fee
                      	added in addition to check writing fees. */
    	{
      	if (checks > 59)  //Works
          	{
            	cout << fixed << showpoint;
             	cout << setprecision(2);
                        cout << "Your bank fee for this month is " << checks * 0.04 + 25 << endl;  
            	exit(0);
          	}
     	}
 
	if (balance < 400) 	//works
    	{
     	if (checks > 39)
          	{
            	if (checks < 60 )
               	{
                	 cout << fixed << showpoint;
             	 cout << setprecision(2);
                         cout << "Your bank fee for this month is " << (checks * 0.06) + 25 << endl;  
                	 exit(0);
               	}
          	}
    	}
   
	if (balance < 400) 	//works
    	{
     	 
      	if (checks > 19)
          	{
            	if (checks < 40)
                	{
                 	 cout << fixed << showpoint;
             	 cout << setprecision(2);
                         cout << "Your bank fee for this month is " << (checks * 0.08) + 25 << endl;  
                 	 exit(0);
                	}
          	}
    	}
   
	if (balance < 400)  	//works
     	{
        	if (checks < 20)
            	{
                	 cout << fixed << showpoint;
             	 cout << setprecision(2);
                         cout << "Your bank fee for this month is " << (checks * 0.10) + 25 << endl;
                	 exit(0);
            	}
     	} 	 
   	 
