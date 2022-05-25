#ifndef TOWN_H
#define TOWN_H

#include "person.h"
#include "family.h"
#include <vector>

class town
{
private:
    vector<person *> List_people;
    person *ptrPerson;
public:
    town() {}
    ~town() {}

    void add();
};
#endif