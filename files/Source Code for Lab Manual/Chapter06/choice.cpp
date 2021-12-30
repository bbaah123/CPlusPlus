// Lab 6 choice.cpp 
// This program illustrates how to use a value-returning 
// function to get, validate, and return input data.
// PUT YOUR NAME HERE.
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int getChoice();

/*****     main     *****/
int main()
{
   int choice;
   
   cout << "Enter an integer between 1 and 4: ";
   
   // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO
   // ASSIGN THE VALUE IT RETURNS TO THE choice VARIABLE.
   
   cout << "You entered " << choice << endl;
}

/*****     getChoice     *****/
int getChoice()
{
   int input;
   
   // Get and validate the input
   cin >> input;
   while (input < 1 || input > 4)
   {  cout << "Invalid input. Enter an integer between 1 and 4: ";
      cin  >> input;
   }
   return input;
}
