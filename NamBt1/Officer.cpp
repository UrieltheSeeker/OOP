#include "Officer.h"
void Officer::getinf()
{
    employee::getinf();
    fflush(stdin);
    cout << " Work: " << endl;
    getline(cin, Work);
}
void Officer::putinf()
{
    employee::putinf();
    cout << " Work: " << Work << endl;
}
string Officer::getType()
{
    return type;
}