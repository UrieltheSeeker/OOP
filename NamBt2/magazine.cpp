#include"magazine.h"

void magazine::getinf()
{
    libraly::getinf();

    cout << " Number of Release: " << endl;
    cin >> release_num;

    cout << " Month to Release (1-12): " << endl;
    cin >> release_month;
}
void magazine::putinf()
{
    libraly::putinf();
    
    cout << " Number of Release: " << release_num << endl;
    cout << " Month to Release: " << release_month << endl;
}
string magazine::Type()
{
    return type;
}