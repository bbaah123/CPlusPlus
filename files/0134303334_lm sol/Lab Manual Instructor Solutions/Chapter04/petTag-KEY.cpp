// Lab 4 petTag-KEY.cpp
// This program determines the fee for a cat or dog pet tag.
// STUDENT NAME GOES HERE.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string pet;         // "cat" or "dog"
   char spayed;        // 'y' or 'n'
      
   // Get pet type 
   cout << "Enter the pet type (cat or dog): ";
   cin  >> pet;
      
   // Determine the pet tag fee 
   if (pet == "cat")
   {  cout << "Has the cat been spayed (y/n)? ";
      cin  >> spayed;
      if (spayed == 'y' || spayed == 'Y') 
         cout << "Fee is $4.00 \n";
      else
         cout << "Fee is $8.00 \n";
   }
   else if (pet == "dog")
   {  cout << "Has the dog been neutered (y/n)? ";
      cin  >> spayed;
      if (spayed == 'y' || spayed == 'Y')
         cout << "Fee is $6.00 \n";
      else
         cout << "Fee is $12.00 \n";
   }
   else
      cout << "Only cats and dogs need pet tags. \n";
     
   return 0;
}
