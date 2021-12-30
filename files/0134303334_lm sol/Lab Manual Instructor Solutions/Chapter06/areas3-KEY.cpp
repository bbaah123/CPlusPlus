// Lab 6 areas3-KEY.cpp 
// This menu-driven program finds areas of squares, circles, 
// snd right triangles. It uses functions to modularize 
// the areas2.cpp program developed in Lab 5. 
// STUDENT NAME GOES HERE.
#include <iostream>
using namespace std;

// Function proptotypes
void displayMenu();
void findSquareArea();
void findCircleArea();
void findTriangleArea();

const double PI = 3.14159;

int main()
{         
   int choice;           // User's menu choice
   
   do
   {  // Display the menu and get the user's menu choice
      displayMenu();
      cin >> choice;
   
      // Call the appropriate function to find and display 
      // the area of the user's chosen object
      if (choice == 1)                              
         findSquareArea();
      else if (choice == 2)                        
         findCircleArea();
      else if (choice == 3)                         
         findTriangleArea();
      else if (choice != 4)
         cout << "Choice must be 1, 2, 3, or 4.\n";
   } while (choice != 4);
   
   return 0;
}

/*****     displayMenu     *****/ 
void displayMenu()
{
   cout << "\n\nProgram to calculate areas of different objects \n\n";
   cout << "        1 -- square \n"
        << "        2 -- circle \n"
        << "        3 -- right triangle \n"
        << "        4 -- quit \n\n";
}

/*****     findSquareArea     *****/ 
void findSquareArea()
{  double side,          // Length of a side of a square
          area;          // Area of a square

   cout << "Length of the square's side: ";
   cin  >> side;
   area = side * side;
   cout << "Area = " << area << endl;
}

/*****     findCircleArea     *****/ 
void findCircleArea()
{  double radius,        // Radius of a circle
          area;          // Area of a circle

   cout << "Radius of the circle: ";
   cin  >> radius;
   area = PI * radius * radius;
   cout << "Area = " << area << endl;
}

/*****     findTriangleArea     *****/ 
void findTriangleArea()
{  double base,          // Length of base of a right triangle
          height,        // Height of a right triangle
          area;          // Area of a triangle
          
   cout << "Base of the triangle: ";
   cin  >> base;
   cout << "Height of the triangle: ";
   cin  >> height;
   area = .5 * base * height;
   cout << "Area = " << area << endl;
}
