#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

int mode()
{
    int mode;
    cout << " Press 1 to add data " << endl;
    cout << " Press 2 to get list " << endl;
    cin >> mode;
    return mode;
}

#endif