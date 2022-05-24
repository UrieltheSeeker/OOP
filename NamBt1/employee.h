#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;
class employee
{
private:
    /*du lieu rieng tu  */
    // attribute
    string Name;
    int Yearsold;
    string Sex;
    string Address;
    string type = "employee";

public:
    virtual void getinf();
    virtual void putinf();
    string getType();
    string getName();
};
#endif
