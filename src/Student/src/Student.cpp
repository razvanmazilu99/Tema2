#include "Student.hpp"

Student::Student() : firstName(""), lastName(""), age(0) {}

Student::Student(string firstName, string lastName, int age) 
{
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> age = age;
}

void Student::printStudent() 
{
    cout << firstName << " " << lastName << " " << age << endl;
}