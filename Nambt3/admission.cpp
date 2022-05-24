#include"admission.h"

void Admission::getinf()
{
    cout << " Identificaton Number: " << endl;
    cin >> idetification_num;

    fflush(stdin);
    cout << " Name: " << endl;
    getline(cin, Name);

    fflush(stdin);
    cout << " Adress: " << endl;
    getline(cin,Adress);

    cout << " Priority Level: " << endl;
    cin >> priority_level;
}

void Admission::putinf()
{
    cout << " Identification Number: " << idetification_num << endl;
    cout << " Name: " << Name << endl;
    cout << " Adress: " << Adress << endl;
    cout << " Priority Level: " << priority_level << endl;
}

int Admission::getID()
{
    return idetification_num;
}