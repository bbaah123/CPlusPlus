// Lab 5 tryIt5B -- Examining looping structures
// Determine what each output statement will print. Then run the
// program to see if you are correct. If any of your answers are
// wrong, figure out why the program produced the output it did.
#include <iostream>
using namespace std;

int main()
{
   int i,             // Loop control variable
       sum;           // Accumulator
       
   i = 1;
   while (i < 10)
   {  cout << i << ' ';
      i +=2;
   }
   cout << "\nAfter loop i = " << i 
        << endl << endl;
   
   i = 5;
   while (i > 0)
      cout << i-- << ' ';
   cout << "\nAfter loop i = " << i 
        << endl << endl;

   i = 1;
   do
   {  cout << i * i << ' ';
      i++;
   } while (i <= 3);
   cout << "\nAfter loop i = " << i 
        << endl << endl;   
      
   sum = 0;
   for (i = 0; i < 4; i++)
      sum += i;
   cout << "After loop i = " << i << endl;
   cout << "sum = " << sum << endl << endl;
 
   for (i = 0; i++ < 4;)
      cout << i << ' ';
   cout << "\nAfter loop i = " << i << endl;
   
   return 0;
}
