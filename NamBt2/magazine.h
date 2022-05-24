#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "libraly.h"

class magazine : public libraly // sub class 2
{
private:
    int release_num;   // so phat hanh
    int release_month; // thanh phat hanh
    string type = "magazine";
public:
    void getinf() override;
    void putinf() override;
    string Type();
};
#endif