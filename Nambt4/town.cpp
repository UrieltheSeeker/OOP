#include "town.h"


void town::add()
{
    cout << " ADD DATA " << endl;
    ptrFamily = new family;
    ptrFamily->getinf();
    List_family.push_back(ptrFamily);
}

void town::list()
{
    auto n = List_family.size();
    for (auto i = n-n; i < n; i++)
    {
        List_family.at(i)->putinf();
    }
}
