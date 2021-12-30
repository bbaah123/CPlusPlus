// Lab 3 icecream-KEY.cpp 
// This program creates a daily sales report for an ice cream cone company.
// STUDENT NAME GOES HERE.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{  
   const
     double SINGLE_SCOOP_PRICE = 1.49,  // Price for each cone type
            DOUBLE_SCOOP_PRICE = 2.49,
            TRIPLE_SCOOP_PRICE = 3.49;
                
   int singleConesSold,                 // Quantity sold of each cone type
       doubleConesSold,
       tripleConesSold,
       totalConesSold;                  // Total cones sold
       
   double singleConeIncome,             // $ sales of each cone type
          doubleConeIncome,
          tripleConeIncome,
          totalIncome;                  // Total $ sales
   
   // Get number of each cone type sold
   cout << "Number of single scoop cones sold: ";
   cin  >> singleConesSold;
   cout << "Number of double scoop cones sold: ";
   cin  >> doubleConesSold;
   cout << "Number of triple scoop cones sold: ";
   cin  >> tripleConesSold;
   
   totalConesSold = singleConesSold + doubleConesSold + tripleConesSold;
   
   // Compute income from cone sales
   singleConeIncome = singleConesSold * SINGLE_SCOOP_PRICE;
   doubleConeIncome = doubleConesSold * DOUBLE_SCOOP_PRICE;
   tripleConeIncome = tripleConesSold * TRIPLE_SCOOP_PRICE;
   totalIncome = singleConeIncome + doubleConeIncome + tripleConeIncome;
   
   // Display the sales report
   cout << fixed << showpoint << setprecision(2);
   cout << "\nDeLIGHTful cones      " << setw(4) << singleConesSold
        << "   $" << setw(7) << singleConeIncome <<endl;
   cout << "Double DeLIGHT cones  " << setw(4) << doubleConesSold
        << "   $" << setw(7) << doubleConeIncome <<endl; 
   cout << "Triple DeLIGHT cones  " << setw(4) << tripleConesSold
        << "   $" << setw(7) << tripleConeIncome <<endl; 
   cout << "Total                 " << setw(4) << totalConesSold
        << "   $" << setw(7) << totalIncome <<endl; 

   return 0;
}
