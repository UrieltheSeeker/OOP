#include "news.h"

void news::getinf()
{
    libraly::getinf();
    cout << " Release Day: ";
    cin >> relaese_day.day;
    cout << " Release Month: ";
    cin >> relaese_day.month;
    cout << " Release Year: ";
    cin >> relaese_day.year;

    // fflush(stdin);
    // cout << " Release Day: " << endl;
    // getline(cin,release_day);
}
void news::putinf()
{
    cout << " Release Day: " << relaese_day.day << "/" << relaese_day.month << "/" << relaese_day.year << endl;
}
string news::Type()
{
    return type;
}