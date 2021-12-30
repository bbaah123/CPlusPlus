#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main()
{
    /*
    int age;
    string name;
    string ssn;

    Person p1;

    cout <<"Enter your age: ";
    cin >> age;
    p1.setAge(age);
    cin.ignore();

    cout << "Enter your name: ";
    getline(cin, name);
    p1.setName(name);

    cout << "Enter your social security number: ";
    getline(cin, ssn);
    p1.setSSN(ssn);
    */

    Person p2(23, "Ben Franklin", "1112223333");

    cout << "Hello " << p2.getName() << endl;
    cout << "You SSN is: " << p2.getSSN();
    cout <<"\nYou are " << p2.getAge() << " years old";

    return 0;
}
