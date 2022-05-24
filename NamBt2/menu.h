#ifndef MENU_H
#define MENU_H

#include<iostream>
using namespace std;
int mode_outter()
{
    int mode;
    cout << " Press 1 to add new data." << endl;
    cout << " Press 2 to delete data." << endl;
    cout << " Press 3 to show the datalist." << endl;
    cout << " Press 4 to search information." << endl;
    cout << " Press 5 to exit." << endl;
    cin >> mode;
    return mode;
}
bool _contineous_()
{
    char optional_;
    cout << " Enter for your option (Y-yes/N-no): ";
    cin >> optional_;
    if (optional_ == 'Y' || optional_ == 'y')
    {
        return true;
    }
    return false;
}

#endif