// Lab 3 findErrors-KEY.cpp
// This program has corrected all the errors in the 
// original file the students began with. It correctly  
// finds the average of the two integers the user enters. 
// PUT YOUR NAME HERE.

#include <iostream>
using namespace std;

int main()                             // () were added
{  int num1, num2;                     // { was added, int was lower cased, ; was added
   double average;
   
   // Input 2 integers
   cout << "Enter two integers separated by one or more spaces: ";  // cout was lower cased
   cin  >> num1 >> num2;               // cin was lower cased, both << and comma  
                                       // were changed to >>
   // Find and display their average   // This line was made into a // comment
   average = (num1 + num2) / 2.0;      // Code was turned into a legal assignment stmt
                                       // 2 was changed to 2.0 to avoid int divide
   cout << "\nThe average of these 2 numbers is " << average <<  endl ;
                                       // cout was lower cased, "endl" was changed to endl
   return 0;
}                                      // } was added
  