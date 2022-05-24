#ifndef MENU_H
#define MENU_H

#include <iostream>
using namespace std;

int outter()
{
    int menu;
    cout << " Press 1 to add indicate data " << endl;
    cout << " Press 2 to get list of indicate " << endl;
    cout << " Press 3 to search indicate data " << endl;
    cout << " Press 4 to exit " << endl;
    cin >> menu;
    return menu;
}
#endif