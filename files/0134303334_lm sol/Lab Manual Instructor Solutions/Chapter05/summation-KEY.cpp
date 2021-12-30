// Lab 5 - summation-KEY.cpp
// This program displays a series of terms and computes its sum.
// STUDENT NAME GOES HERE.                        
#include <iostream>
#include <cmath>
using namespace std;

int main()
{     
	int n,    			   // Value of n in the final term of the series
	    denom,         	// Denominator of a particular term
       finalDenom;      // Denominator of the final term
	double sum = 0.0;		// Summation of all terms in the series
   char doAgain;        // Loop again? (y/n)
	
   cout << "STUDENT NAME PRINTS HERE. \n";
   cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n";			
   
   do                   // Loop once for each summation the user wants to do
   {  
      // Get and validate n, where pow(2,n) is the denominator of the final term
      cout << "\n\nWhat should n be in the final term (2 - 10)? "; 
      cin  >> n;
      while (n < 2 || n > 10)
      {  cout << "Invalid input. "
              << "Enter a positive integer between 2 and 10: ";
         cin  >> n;
      }
      cout << endl;
      
      // Reinitialize sum to 0
      sum = 0.0;
      
      // Compute the denominator of the final term
      finalDenom = static_cast<int>(pow(2.0, n));
      
      // Loop once for each term
		for (denom = 2; denom <= finalDenom; denom *=2)
		{
			// Print the term
			cout << "1/" << denom;
			if (denom < finalDenom)
			   cout << " + ";
         else
            cout << " = ";
            
         // Add the value of the term to the accumulator
			sum = sum + 1.0 / denom;
		}
		// Print the answer	
		cout << sum << endl << endl;
      
      // Does the user want to do another summation?
      cout << "Do you want to do another summation? (y/n) ";
      cin  >> doAgain;
   } while (doAgain == 'y' || doAgain == 'Y');
      
	return 0;
}
