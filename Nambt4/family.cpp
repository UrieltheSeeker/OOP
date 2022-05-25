#include "family.h"

void family::getinf()
{
    person :: getinf();

    cout << " Number of people in the family: ";
    cin >> family_member_num;

    cout << " House Number: ";
    cin >> house_num;
}

void family::putinf()
{
    person :: putinf();

    cout << " Number of menber in family: " << family_member_num << endl;
    cout << " House Number: " << house_num << endl; 
}