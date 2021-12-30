// Lab 4 switch-KEY.cpp
// This program lets the user select a primary color from a menu. 
// It revises the color.cpp program to use a switch statement 
// instead of an if/else if statement.
// STUDENT NAME GOES HERE.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int choice;    // Menu choice should be 1, 2, or 3
   
   // Display the menu of choices
   cout << "Choose a primary color by entering its number. \n\n";
   cout << "1 Red \n" << "2 Blue \n" << "3 Yellow \n";
   
   // Get the user's choice
   cin >> choice;
   
   // Use a switch statement to tell the user what he or she picked
   switch(choice)
   {  case 1:  cout << "\nYou picked red.\n";
               break;
              
      case 2:  cout << "\nYou picked blue.\n";
               break;
               
      case 3:  cout << "\nYou picked yellow.\n";
               break;
               
      default: cout << "\nYou must choose 1, 2, or 3.\n";
   }
   return 0;
}
   