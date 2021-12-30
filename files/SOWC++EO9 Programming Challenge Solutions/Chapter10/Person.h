#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Person
{
	string name;
	int age;
};

void getPersonData(Person personData[]);
void getPersonData(Person personData[], istream & in);
void displayPersonData(Person personData[]);
void displayPersonDataIndirect(Person* pPerson[]);
void sortByPointers(Person * pPerson[], Person personData[]);
void reverse(Person* pPerson[]);