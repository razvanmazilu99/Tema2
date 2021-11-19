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

University::~University() 
{
    students.clear();
}