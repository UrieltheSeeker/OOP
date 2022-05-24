#ifndef MODE_H
#define MODE_H

#include <iostream>
using namespace std;

int mode_inner1()
{
    int mode1;
    cout << " Press 1 to add book data." << endl;
    cout << " Press 2 to add magazine data." << endl;
    cout << " Press 3 to add News data." << endl;
    cin >> mode1;
    return mode1;
}

int mode_inner2()
{
    int mode2;
    cout << "Press 1 to search book. " << endl;
    cout << "Press 2 to search magazine. " << endl;
    cout << "Press 3 to search news." << endl;
    cin >> mode2;
    return mode2;
}
#endif