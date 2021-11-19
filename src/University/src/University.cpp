#include "University.hpp"

University::University() : name("None"), city("None"), students({}) {};

University::University(string name, string city) 
{
    this -> name = name;
    this -> city = city;
}

University::University(const University& university) 
{
    this -> name = university.name;
    this -> city = university.city;
    this -> students = university.students;
}

University& University::operator=(const University &university)
{
    //check for self-assign
    if(this == &university) return *this;

    this -> name = university.name;
    this -> city = university.city;
    this -> students = university.students;

    return *this;
}

University::~University() 
{
    students.clear();
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

    cout << endl;
}