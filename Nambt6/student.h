#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int yearold;
    string hometown;

public:
    void getinf();
    void putinf();
    int GetYearOld();
    string GetHOmeTown();
};

#endif