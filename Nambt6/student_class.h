#ifndef STUDENT_CLASS_H
#define STUDENT_CLASS_H

#include "student.h"
#include <vector>

class student_class : public student
{
private:
    vector<student *> List_Student;
    student *ptrStudent;

public:
    void add();
    void list();
    int count();
};
#endif