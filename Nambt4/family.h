#ifndef FAMILY_H
#define FAMILY_H

#include "person.h"

class family : public person
{
private:
    int family_member_num;
    int house_num;

public:
    void getinf() override;
    void putinf() override;
};
#endif