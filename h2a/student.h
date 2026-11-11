
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string name;
    int studentNumber;
    double average;

public:
    void setName(string newName);
    void setStudentNumber(int newNumber);
    void setAverage(double newAverage);

    string getName();
    int getStudentNumber();
    double getAverage();
};

#endif
