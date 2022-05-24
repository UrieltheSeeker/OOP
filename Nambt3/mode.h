#ifndef MODE_H
#define MODE_H

#include <iostream>
using namespace std;

int inner()
{
    int mode;
    cout << " Press 1 to add indicate A data " << endl;
    cout << " Press 2 to add indicate B data " << endl;
    cout << " Press 3 to add indicate C data " << endl;
    cin >> mode;
    return mode;
};
#endif