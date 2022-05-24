#ifndef LIBRALY_H
#define LIBRALY_H

#include <iostream>
#include <string>
using namespace std;

class libraly // base class
{
private:
    int id;         // ma tai lieu
    string imprint; // ten nha phat hanh
    int rel_number; // so ban phat hanh
    string type = "libraly";
public:
    virtual void getinf();
    virtual void putinf();
    int getId();
    string getType();
};
#endif