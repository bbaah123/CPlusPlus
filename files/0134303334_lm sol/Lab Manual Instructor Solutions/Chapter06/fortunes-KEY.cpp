// Lab 6 fortunes.cpp 
// This fortune telling program will be modified to use a void function.
// STUDENT NAME GOES HERE.
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
void tellFortune(int, int);

/*****     main     *****/
int main()
{
   int numYears,
       numChildren;
          
   cout << "This program can tell your future. \n"
        << "Enter two integers separated by a space: ";
        
   cin >> numYears >> numChildren;
   
   tellFortune(numYears, numChildren);
  
   return 0;
}

/*****     tellFortune     *****/
void tellFortune(int numYears, int numChildren)
{
   numYears = abs(numYears) % 5;       // Convert to a positive integer 0 to 4
   numChildren = abs(numChildren) % 6; // Convert to a positive integer 0 to 5
   
   cout << "\nYou will be married in " << numYears << " years "
        << "and will have " << numChildren << " children.\n";  
}
