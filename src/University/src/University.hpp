#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "../../Student/src/Student.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class University
{
    private:
        string name;
        string city;
        vector<Student> students;

    public:
        University();
        University(string name, string location);
        ~University();
        void addStudents(Student &student);
        void printUniversity();
};

#endif