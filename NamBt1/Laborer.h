#ifndef LABORER_H
#define LABORER_H
#include "employee.h"
class Laborer : public employee // sub class 1
{
public:
    // attribute
    int Level;
    string type = " Laborer ";
    // method
    void getinf() override;
    void putinf() override;
    string getType();
};
#endif