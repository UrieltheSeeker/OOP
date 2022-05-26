#ifndef MODE_H
#define MODE_H

#include <iostream>
using namespace std;

int mode()
{
    int mode;
    cout << " Press 1 to add data " << endl;
    cout << " Press 2 to get list " << endl;
    cout << " press 3 to get .... " << endl;
    cin >> mode;
    return mode;
}
#endif