#ifndef TOWN_H
#define TOWN_H

#include "family.h"
#include <vector>

class town
{
private:
    vector<family *> List_family;
    family *ptrFamily;
public:
    town() {}
    ~town() {}

    void add();
    void list();
};
#endif