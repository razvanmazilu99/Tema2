#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student 
{
    private:
        string firstName;
        string lastName;
        int age;

    public:
        Student();
        Student(string firstName, string lastName, int age);
        void printStudent();
};

#endif