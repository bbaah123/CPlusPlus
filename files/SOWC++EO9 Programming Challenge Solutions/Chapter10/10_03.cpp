// Chapter  10 - Assignment 3, Indirect Sorting Through Pointers #1
// This program shows how sort an array of pointers that is 
// parallel to another array, and then display the  array values
// is sorted order through the array of pointers while leaving
// the original array unchanged.

#include <fstream>
#include "Person.h"

int main()
{
	const int NUMBER = 10;
	// Define an array to hold data for 10 people and a parallel array of 
	// pointers.
	Person people[NUMBER];
	Person *pPerson[NUMBER];

	// Get data
	ifstream inFile("peopledata.txt");
	if (!inFile)
	{		
		cout << "Enter data for 10 people as prompted:" << endl;
		getPersonData(people);
	}
	else
	{
		getPersonData(people, inFile);		
	}
	// Set the parallel array of pointers
	for (int k = 0; k < NUMBER; k++)
	{
		pPerson[k] = &people[k];
	}

	// Sort by pointers, ascending
	sortByPointers(pPerson, people);

	// Display the array
	cout << "Here is the array of people: " << endl;
	displayPersonData(people);

	// Display by pointers
	cout << "Display indirectly through pointers: " << endl;
	displayPersonDataIndirect(pPerson);

	cout << "Press any key to end the program." << endl;
	cin.get();

    return 0;
}

