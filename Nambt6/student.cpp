#include "student.h"

void student::getinf()
{
    fflush(stdin);
    cout << " Name: " << endl;
    getline(cin,name);

    cout << " Year old: " << endl;
    cin >> yearold;

    fflush(stdin);
    cout << " Home Town: " << endl;
    getline(cin, hometown);
}

void student::putinf()
{
    cout << " Name: " << name << endl;
    cout << " Year old: " << yearold << endl;
    cout << " Home Town: " << hometown << endl; 
}

int student::GetYearOld()
{
    return yearold;
}
string student::GetHOmeTown()
{
    return hometown;
}