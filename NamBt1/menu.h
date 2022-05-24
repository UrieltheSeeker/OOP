#ifndef MENU_H
#define MENU_H
#include<iostream>
using namespace std;
int option1()
{ 
int mode1;
    cout << " Applicaton Manager Office " << endl;
    cout << " Press num 1 to insert officer. " << endl;
    cout << " Press num 2 to search by name." << endl;
    cout << " Press num 3 to get list of officer. " << endl;
    cout << " Press num 4 to exit." << endl;
    cin >> mode1;
return mode1;
}


#endif
