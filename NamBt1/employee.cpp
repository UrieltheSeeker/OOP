#include "employee.h"

void employee::getinf()
{
    fflush(stdin);
    cout << " Name: " << endl;
    getline(cin, Name);

    cout << " Years Old: " << endl;
    cin >> Yearsold;

    cout << " Sex(male/female): " << endl;
    cin >> Sex;

    fflush(stdin);
    cout << " Address " << endl;
    getline(cin, Address);
}
void employee::putinf()
{
    cout << " Name: " << Name << endl;
    cout << " Years Old: " << Yearsold << endl;
    cout << " Sex: " << Sex << endl;
    cout << " Address: " << Address << endl;
}
string employee::getType()
{
    return type;
    
}
string employee::getName()
{
    return Name;   
}
