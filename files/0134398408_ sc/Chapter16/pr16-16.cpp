// This program demonstrates the STL max_element
// and min_element algorithms. 
#include <iostream>
#include <vector>          // Needed to declare the vector
#include <algorithm>	   // Needed for the algorithms
using namespace std;

int main()
{
   vector<int> numbers;
   vector<int>::iterator iter;

   // Store some numbers in the vector
   for (int x = 0; x < 10; x++)
       numbers.push_back(x);
   
   // Shuffle things up just for fun   
   random_shuffle(numbers.begin(), numbers.end());
   
   // Display the numbers in the vector   
   cout << "The numbers in the vector are:\n";
   for (iter = numbers.begin(); iter != numbers.end(); iter++)
       cout << *iter << " ";
   cout << endl;
   
   // Find the largest value in the vector
   iter = max_element(numbers.begin(), numbers.end());
   cout << "The largest value in the vector is "
	  << *iter << endl;
  
   // Find the smallest value in the vector
   iter = min_element(numbers.begin(), numbers.end());
   cout << "The smallest value in the vector is "
	  << *iter << endl;
		  
   return 0;
}