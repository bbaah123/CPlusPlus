// Lab 5 - cookies-KEY.cpp  
// This program finds the average number of boxes of cookies 
// sold by the children in a particular scout troop. 
// It illustrates the use of a counter, an accumulator, 
// and an end sentinel.
// STUDENT NAME GOES HERE.                        
#include <iostream>
using namespace std;

int main()
{   
   int numBoxes,         // Number of boxes of cookies sold by one child
       totalBoxes,       // Accumulates total boxes sold by the entire troop
       numSeller;        // Counts the number of children selling cookies
       
   double averageBoxes;  // Average number of boxes sold per child
   
   // Initialize accumulator and counter
   totalBoxes = 0;
   numSeller = 1;
  
   cout << "             **** Cookie Sales Information **** \n\n";
   
   // Get and validate the first input
   cout << "Enter number of boxes sold by seller " << numSeller
        << " (or -1 to quit): ";
   cin  >> numBoxes;
   while (numBoxes < -1)
   {  cout << "Invalid entry. Re-enter number of boxes sold (or -1 to quit): ";
      cin  >> numBoxes;
   }
   
   while (numBoxes != -1)       // While the most recent input was not 
   {                            // the end sentinel, process it
      totalBoxes += numBoxes;
      numSeller++;
      
     // Get and validate the next input
     cout << "Enter number of boxes sold by seller " << numSeller
          << " (or -1 to quit): ";
     cin  >> numBoxes;
     while (numBoxes < -1)
     {  cout << "Invalid entry. Re-enter number of boxes sold (or -1 to quit): ";
        cin  >> numBoxes;
     }
   } 
   // Adjust numSeller so we don't count the sentinel entry
   numSeller--;
   
   if (numSeller == 0)        // If true, -1 was the very first entry
      cout << "\nNo boxes were sold.\n";
   else
   {  // Calculate average sales, avoiding int division
      averageBoxes = 1.0 * totalBoxes / numSeller;   // 
     
      // Display the results
      cout << "\nThe average number of boxes sold by the " << numSeller
           << " sellers was " << averageBoxes << ".\n";
   }
   return 0;
}
