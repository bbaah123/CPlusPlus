// Lab 6 choice-KEY.cpp 
// This program illustrates how to use a value-returning 
// function to get, validate, and return input data.
// STUDENT NAME GOES HERE.
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int getChoice(int, int);

/*****     main     *****/
int main()
{
   int choice;
   
   cout << "Enter an integer between 1 and 4: ";
   
   choice = getChoice(1, 4);
   
   cout << "\nYou entered " << choice << endl;
}

/*****     getChoice     *****/
int getChoice(int min, int max)
{
   int input;
   
   // Get and validate the input
   cin >> input;
   while (input < min || input > max)
   {  cout << "Invalid input. Enter an integer between "
           << min << " and " << max << ": ";
      cin  >> input;
   }
   return input;
}
