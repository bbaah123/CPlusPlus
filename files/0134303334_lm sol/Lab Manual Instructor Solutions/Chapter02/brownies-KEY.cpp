// brownies.cpp KEY
// This program determines how many small and large brownies 
// fit in a pan of a specified size.
// <Student name goes here>
#include <iostream>
using namespace std;

int main()
{   
   int length,               // These could all be doubles.
       width,
       area,
       numSmallBrownies,
       numLargeBrownies;
       
   // Get pan dimensions
   cout << "Input baking pan length (in inches): ";
   cin  >> length;
   cout << "Input baking pan width (in inches): ";
   cin  >> width;
   
   // Compute bottom surface area
   area = length * width;
      
   // Compute number of each size brownie
   numSmallBrownies = area;
   numLargeBrownies = area / 4;
   
   // Display results
   cout << "\nA " << length << " X " << width 
        << " inch pan can hold " << numSmallBrownies << " small brownies or "
        << numLargeBrownies << " large brownies.\n"; 
  
   return 0;
}
