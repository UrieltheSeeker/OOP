#include "libraly.h"

void libraly::getinf()
{
    cout << " ID: " << endl;
    cin >> id;

    fflush(stdin);
    cout << " Imprint " << endl;
    getline(cin, imprint);
    cout << " Release Number: " << endl;
    cin >> rel_number;
}
//////
void libraly::putinf()
{
    cout << " ID: " << id << endl;
    cout << " Imprint; " << imprint << endl;
    cout << " Release Number: " << rel_number << endl;
}
/////
int libraly::getId()
{
    return id;
}
string libraly::getType()
{
    return type;
}