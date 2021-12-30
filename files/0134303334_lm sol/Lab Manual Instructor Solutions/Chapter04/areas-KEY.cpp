// Lab 4 areas.cpp 
// This menu-driven program finds areas of squares, 
// circles, and right triangles.
// STUDENT NAME GOES HERE.
#include <iostream>
using namespace std;

int main()
{  
   const double PI = 3.14159;
     
   double side,          // Length of a side of a square
          radius,        // Radius of a circle
          base,          // Length of base of a right triangle
          height,        // Height of a right triangle
          area;          // Area of a square, circle, or right triangle.
          
   int choice;           // User's menu choice
   
   // Display the menu
  	 cout << "Program to calculate areas of different objects \n\n";
	 cout << "        1 -- square \n"
			<< "        2 -- circle \n"
			<< "        3 -- right triangle \n"
         << "        4 -- quit \n\n";

   cin >> choice;
   
   // Find and display the area of the user's chosen object
   if (choice == 1)                              // square
   {  cout << "Length of the square's side: ";
      cin  >> side;
      area = side * side;
      cout << "Area = " << area << endl;
   }
   else if (choice == 2)                         // circle
   {  cout << "Radius of the circle: ";
      cin  >> radius;
      area = PI * radius * radius;
      cout << "Area = " << area << endl;
   }
   else if (choice == 3)                         // right triangle
   {  cout << "Base of the triangle: ";
      cin  >> base;
      cout << "Height of the triangle: ";
      cin  >> height;
      area = .5 * base * height;
      cout << "Area = " << area << endl;
   }
   else if (choice != 4)
      cout << "Choice must be 1, 2, 3, or 4.\n";
      
   return 0;
}
