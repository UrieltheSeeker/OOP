#ifndef FAMILY_H
#define FAMILY_H

#include "person.h"
#include <vector>

class family : public person
{
private:
    int house_num;
    vector<person*> people;
    person *ptrPerson;

public:
    void getinf() override;
    void putinf() override;
};
#endif