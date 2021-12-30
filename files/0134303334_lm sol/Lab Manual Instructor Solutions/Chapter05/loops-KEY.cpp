// Lab 5 - loops-KEY.cpp  Working with looping structures
// STUDENT NAME GOES HERE.                        
#include <iostream>
using namespace std;

int main()
{   
   cout << "STUDENT NAME PRINTS HERE. \n";
   cout << "\nActivity 1 \n==========\n";
   // The former do-while loop was changed to a while loop. 
   int inputNum = 1;
   while (inputNum != 0)
   {  cout << "Enter a number (or 0 to quit): ";
      cin  >> inputNum;
   } 

   cout << "\nActivity 2 \n==========\n";
   // The former while loop was changed to a do-while loop. 
   char doAgain;
   do 
   {  cout << "Do you want to loop again? (y/n) ";
      cin  >> doAgain;
   } while (doAgain == 'Y' || doAgain == 'y');
 
   cout << "\nActivity 3 \n==========\n";
   // The former while loop was changed to a for loop. 
   for (int count = 0; count++ < 5; )
      cout << "Count is " << count << endl;

   cout << "\nActivity 4 \n==========\n";
   // The former for loop was changed to a while loop. 
   int x = 5;
   while (x > 0)
      cout << x-- << " seconds to go. \n";

   cout << "\nActivity 5 \n==========\n";
   // The following code, that uses nested loops, was corrected 
   // and modified to print the following pattern. 
   // $****
   // $****
   // $****
   for (int row = 1; row <= 3; row++)
   {  cout << '$';
      for (int star = 1; star <= 4; star++)
         cout << '*';
      cout << endl;
   }
    
   return 0;
}
