#include"Laborer.h"
void Laborer::getinf()
{   
    employee::getinf();
    cout << " Level (1 to 10): " << endl;
    cin >> Level;
}
void Laborer::putinf()
{
    employee::putinf();
    cout << " Laborer Level: " << Level << endl;
}
string Laborer::getType()
{
    return type;
}
