#ifndef ADMISSION_H
#define ADMISSION_H

#include <iostream>
using namespace std;

class Admission // base class
{
private:
    int idetification_num; // so bao danh
    string Name;           // ten
    string Adress;         // dia chi
    int priority_level;    // muc uu tien
    string subject = " admin ";

public:
    void getinf();
    virtual void putinf();
    int getID();
};
#endif