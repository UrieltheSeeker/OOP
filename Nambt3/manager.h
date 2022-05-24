#ifndef MANAGER_H
#define MANAGER_H

#include "admission.h"
#include "indicateA.h"
#include "indicateB.h"
#include "indicateC.h"
#include <vector>

class manager
{
private:
    vector <Admission *> List_indicate;
    Admission *ptr_admission;

public:
    manager() {}
    ~manager() {}

    void add();
    void list();
    void search();
};
#endif