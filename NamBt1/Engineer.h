#ifndef ENGINEER_H
#define ENGINEER_H
#include "employee.h"
class Engineer : public employee // sub class 2
{
public:
    // attribute
    string Major;
    string type = " Engineer ";

    // method
    void getinf() override;
    void putinf() override;
    string getType();
};
#endif