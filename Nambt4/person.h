#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class person    // base class 
{
private:
    string name;    // ten
    int yearsold;   // tuoi
    string job;     // cong viec
    int ID_num;     // so can cuoc cong dan 

public:
    virtual void getinf();
    virtual void putinf();
};
#endif