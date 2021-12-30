// Lab 3 percentage-KEY.cpp
// This program will determine the percentage 
// of answers a student got correct on a test.
// STUDENT NAME GOES HERE.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   string name;
   int numQuestions,
       numCorrect;
   double percentage;
   
   // Get student's test data
   cout << "Enter student's first and last name: ";
   getline(cin, name);
   
   cout << "Number of questions on the test: ";
   cin  >> numQuestions;
   cout << "Number of answers the student got correct: ";
   cin  >> numCorrect;
   
   // Compute and display the student's % correct
   percentage = static_cast<double>(numCorrect) / numQuestions * 100;
   
   cout << fixed << showpoint << setprecision(1);
   cout << endl << name << "    " << percentage << '%' << endl;
   
   return 0;
}
