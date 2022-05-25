#include "person.h"

void person::getinf()
{
    fflush(stdin);
    cout << " Name: " << endl;
    getline(cin, name);

    cout << " Yearsold: " << endl;
    cin >> yearsold;

    fflush(stdin);
    cout << " Job: " << endl;
    getline(cin, job);

    cout << " Identification Number: " << endl;
    cin >> ID_num;
}

void person::putinf()
{
    cout << " Name: " << name << endl;
    cout << " Yearsold: " << yearsold << endl;
    cout << " Job: " << job << endl;
    cout << " Identification Number: " << ID_num << endl;
}