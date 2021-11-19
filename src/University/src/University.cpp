#include "University.hpp"

University::University() : name(""), city(""), students({}) {};

University::University(string name, string city) 
{
    this -> name = name;
    this -> city = city;
}

void University::addStudents(Student &student)
{
    students.push_back(student);
}

void University::printUniversity()
{
    cout << name << " " << city << ":" << endl;
    
    for(Student s : students) {
        cout << "  • " << s.getFirstName() << " " << s.getLastName() << " " << s.getAge() << " years" << endl;
    }
}

University::~University() { }