#include <iostream>
#include <string>
#include "person.h"

Person::Person()
{
    this->name = "Joe";
}
Person::Person(int age, string name, string ssn)
{
   this->age = age;
   this->ssn = ssn;
   this->name = name;
}
Person::~Person()
{


}

int Person::getAge()
{
    return age;

}

void Person::setAge(int age)
{
    this->age = age;
}

void Person::setSSN(string ssn)
{
    this->ssn = ssn;
}

string Person::getSSN()
{
    return ssn;
}

void Person::setName(string name)
{
    this->name = name;
}

string Person::getName()
{
    return name;
}
