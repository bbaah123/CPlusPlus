#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
    string ssn;
    int age;
public:
    Person();
    Person(int, string, string);
    ~Person();
    string getName();
    string getSSN();
    int getAge();
    void setName(string name);
    void setSSN(string name);
    void setAge(int age);
};
