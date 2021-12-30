#include "Person.h"
#include <algorithm>      // needed for swap

const int NUMBER = 10;

//*************************************************
//              getPersonData                     *
//        Reads in data for NUMBER people         *
//*************************************************
void getPersonData(Person personData[])
{
	for (int k = 0; k < NUMBER; k++)
	{
		cout << "Enter name of person at index " << k << " : ";
		getline(cin, personData[k].name);
		
		cout << "Enter age of person at index " << k << " : ";
		cin >> personData[k].age;
		cin.ignore();
    }
}

//*************************************************
//              getPersonDataFromStream           *
//        Reads in data for NUMBER people         *
//*************************************************
void getPersonData(Person personData[], istream & in)
{
	for (int k = 0; k < NUMBER; k++)
	{	
		getline(in, personData[k].name);		
		in >> personData[k].age;
		in.ignore();
	}
}

//**************************************************
//              displayPersonData                  *
// Displays data for NUMBER people                 *
//**************************************************
void displayPersonData(Person personData[])
{
	for (int k = 0; k < NUMBER; k++)
	{
		cout << personData[k].name << " " << personData[k].age << endl;
	}
}

//****************************************************
//           displayPersonDataIndirect               *
// Displays person data through an array of pointers *
//****************************************************
void displayPersonDataIndirect(Person* pPerson[])
{
	for (int k = 0; k < NUMBER; k++)
	{
		cout << pPerson[k]->name << " " << pPerson[k]->age << endl;
	}
}

//****************************************************
//             sortByPointers                        *
// Given a parallel array of pointers to Person      *
// objects in an array, sort the array of pointers   *
// so that the Person objects are pointed to in      *
// ascending alphabetic order of names               *
//****************************************************
void sortByPointers(Person * pPerson[], Person personData[])
{
	int minPos;        //Position of pointer to minimum value in a section of the array.   

	for (int k = 0; k < (NUMBER - 1); k++)
	{
		// The kth iteration finds the pointer to the person with the
		// least name from among pPerson[k..NUMBER-1] and puts that pointer at 
		// pPerson[k]

		minPos = k;     // k is assumed to be the position of the minimum

						// Is there a position in k+1 .. NUMBER - 1
						// with a name less than that at k? 
		for (int pos = k + 1; pos < NUMBER; pos++)
		{
			if (pPerson[pos]->name < pPerson[minPos]->name)
			{
				minPos = pos;
			}
		}

		// Swap the pointer at minPos with the pointer at k
		// to make pPerson[k] point to the person with the least name
		// in k..NUMBER -1
		swap(pPerson[k], pPerson[minPos]);
	}
}

//**********************************************
//            reverse                          *
// Reverses the order of the elements of the   *
// given pointer array.                        *
//**********************************************
void reverse(Person* pPerson[])
{
	int lower = 0;
	int upper = NUMBER - 1;

	while (lower < upper)
	{
		swap(pPerson[lower], pPerson[upper]);
		lower++;
		upper--;
	}
}