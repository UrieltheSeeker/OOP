#include "book.h"

void book::getinf()
{
    libraly::getinf();

    fflush(stdin);
    cout << " Author Name: " << endl;
    getline(cin, author_name);

    cout << " Page Number: " << endl;
    cin >> page_number;
}
void book::putinf()
{
    libraly::putinf();

    cout << " Author Name: " << author_name << endl;
    cout << " Page Numbers:  " << page_number << endl;
}

string book::Type()
{
    return type;
}