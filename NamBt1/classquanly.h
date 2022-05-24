#ifndef CLASSQUANLY_H
#define CLASSQUANLY_H
#include "employee.h"
#include "Laborer.h"
#include "Engineer.h"
#include "Officer.h"
#include <vector>
class qlcb
{
private:
    vector<employee *> dscb_;
    employee *prtEmployee;
    vector<employee *> name_similary;
public:
    qlcb(/* args */) {}
    ~qlcb() {}
    bool Insert();
    // if insert successfully, function return true
    // if insert is not success, function return false
    void Search();
    // input is a employee's name, if it done, func return true,
    // and cout all of information of the employee.
    // otherwise, return false, exit Search-option
    void List_Employee();
    // cout: name + role all of employee
};

#endif