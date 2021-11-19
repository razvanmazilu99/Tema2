#include "src/Student/src/Student.hpp"
#include "src/University/src/University.hpp"

#include <iostream>
using namespace std;

int main()
{
    Student student("Bill", "Gates", 50);
    Student student1("Elon", "Musk", 35);
    Student student2("Albert", "Einstein", 26);

    University university("Politehnica", "Timisoara");

    university.addStudents(student);
    university.addStudents(student1);
    university.addStudents(student2);

    university.printUniversity();

    //use copy constructor to copy a university
    University u1(university);
    u1.printUniversity();

    //use copy constructor to create a student
    Student student3(student);
    student3.printStudent();

    //use copy assignment operator for university
    University u2;
    u2 = u1;

    u2.printUniversity();

    //use copy assignment operator for student
    Student student4;
    student4 = student1;

    //self-assign
    student4 = student4;

    student4.printStudent();

    return 0;
}