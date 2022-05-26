#include "family.h"

void family::getinf()
{
    person :: getinf();
    cout << " FAMILY DATA " << endl;

    // cout << " Number of people in the family: ";
    // cin >> family_member_num;
    cout << " Menber data " << endl;
    ptrPerson = new person;
    ptrPerson->getinf();
    people.push_back(ptrPerson);

    cout << " House Number: "<< endl;
    cin >> house_num;


}

void family::putinf()
{
    person :: putinf();
    cout << " FAMILY DATA " << endl;

    cout << " Number of menber in family: " << people.size() << endl;
    for (int i=0; i<people.size(); i++)
    {
        people.at(i)->putinf(); 
    }

    cout << " House Number: " << house_num << endl;
}