#ifndef OFFICER_H
#define OFFICER_H
#include "employee.h"
class Officer : public employee // sub class 3
{
public:
    // attribute
    string Work;
    string type = " Officer ";

    // method
    void getinf() override;
    void putinf() override;
    string getType();
};
#endif