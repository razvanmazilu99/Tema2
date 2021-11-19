#include "Student.hpp"

Student::Student() : firstName("None"), lastName("None"), age(0) {}

Student::Student(string firstName, string lastName, int age) 
{
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> age = age;
}

Student& Student::operator=(const Student &student)
{  
    //check for self-assign
    if(this == &student) return *this;

    this -> firstName = student.firstName;
    this -> lastName = student.lastName;
    this -> age = student.age;

    return *this;
}

 Student::Student(const Student& student) 
 {
     firstName = student.firstName;
     lastName = student.lastName;
     age = student.age;
 }

Student::~Student() { }

void Student::printStudent() 
{
    cout << firstName << " " << lastName << " " << age << endl;
}

string Student::getFirstName() { return firstName; }

string Student::getLastName() { return lastName; }

int Student::getAge() { return age; }