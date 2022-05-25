#include "town.h"

void town::add()
{
    ptrPerson = new person;
    ptrPerson->getinf();
    List_people.push_back(ptrPerson);

}