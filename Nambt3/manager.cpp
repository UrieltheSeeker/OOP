#include "manager.h"
#include "mode.h"

void manager::add()
{
    int them = inner();
    switch (them)
    {
    case 1:
    {
        cout << " INDICATE A " << endl;

        ptr_admission = new indicateA;
        ptr_admission->getinf();
        List_indicate.push_back(ptr_admission); 

        break;
    }
    case 2:
    {
        cout << " INDICATE B " << endl;
        
        ptr_admission = new indicateB;
        ptr_admission->getinf();
        List_indicate.push_back(ptr_admission);

        break;
    }
    case 3:
    {
        cout << " INDICATE C " << endl;
        ptr_admission = new indicateC;
        ptr_admission->getinf();
        List_indicate.push_back(ptr_admission);
        break;
    }
    }
}

void manager::list()
{
   auto n = List_indicate.size();
   for (auto i = n-n; i<n; i++)
   {
       List_indicate.at(i)->putinf();
   } 
}

void manager::search()
{   
    int so;
    cout << " Insert Identification Number :";
    cin >> so;

    auto n = List_indicate.size();
    for (auto i = n-n; i<n; i++)
    {
        if (List_indicate.at(i)->getID() == so )
        {
            cout << List_indicate.at(i)->getID() << endl;
        }
        
    }
}