#include "Engineer.h"
void Engineer::getinf()
{
    employee::getinf();
    fflush(stdin);
    cout << " Major: " << endl;
    getline(cin, Major);
}
void Engineer::putinf()
{
    employee::putinf();
    cout << " Major: " << Major << endl;
}
string Engineer::getType()
{
    return type;
}