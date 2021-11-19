#include "Student.hpp"

Student::Student() : firstName(""), lastName(""), age(0) {}

Student::Student(string firstName, string lastName, int age) 
{
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> age = age;
}

Student::~Student() { }

void Student::printStudent() 
{
    cout << firstName << " " << lastName << " " << age << endl;
}

string Student::getFirstName() { return firstName; }

string Student::getLastName() { return lastName; }

int Student::getAge() { return age; }