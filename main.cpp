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

    Student student3;

    //calls the copy assignment operator
    student3 = student1;

    //self-assign
    student3 = student3;

    student3.printStudent();

    return 0;
}