#include "manager.h"
#include "mode.h"

void manager::add() //them 
{
    int them = mode_inner1();
    switch (them)
    {
    case 1:
    {
        cout << " BOOK DATA " << endl;
        ptrLibraly = new book;
        ptrLibraly->getinf();
        List_Libraly.push_back(ptrLibraly);

        auto checkid = setid.insert(ptrLibraly->getId());
        if (!checkid.second)
        {
            cout << "============== Error. ID already exited ============== " << endl;
        }
        break;
    }
    case 2:
    {
        cout << " MAGAZINE DATA " << endl;
        ptrLibraly = new magazine;
        ptrLibraly->getinf();
        List_Libraly.push_back(ptrLibraly);

        auto checkid = setid.insert(ptrLibraly->getId());
        if (!checkid.second)
        {
            cout << "============== Error. ID already exited ============== " << endl;
        }
        break;
    }
    case 3:
    {
        cout << " NEWS DATA " << endl;
        ptrLibraly = new news;
        ptrLibraly->getinf();
        List_Libraly.push_back(ptrLibraly);
        
        auto checkid = setid.insert(ptrLibraly->getId());
        if (!checkid.second)
        {
            cout << "============== Error. ID already exited ============== " << endl;
        }
        break;
    }
    }
}

void manager::delete_() //xoa
{
    int xoa;
    cout << " Insert ID to delete: ";
    cin >> xoa;

    auto a = List_Libraly.size();
    for (auto i = a - a; i < a; i++)
    {
        if (List_Libraly.at(i)->getId() == xoa)
        {
            List_Libraly.pop_back();
        }
    }
}

void manager::list()    // dnah sach 
{
    auto n = List_Libraly.size();
    for (auto i = n - n; i < n; i++)
    {
        List_Libraly.at(i)->putinf();
    }
}

void manager::search()  //tim kiem 
{
    int tim = mode_inner2();
    switch (tim)
    {
    case 1:
    {
        cout << " BOOK " << endl;
        auto a = List_Libraly.size();
        for (auto i = a - a; i < a; i++)
        {
            if (List_Libraly.at(i)->getType() == "book")
            {
                cout << List_Libraly.at(i)->getType() << endl;
            }
        }

        break;
    }
    case 2:
    {
        cout << " MAGAZINE " << endl;
        auto b = List_Libraly.size();
        for (auto i = b - b; i < b; i++)
        {
            if (List_Libraly.at(i)->getType() == "magazine")
            {
                cout << List_Libraly.at(i)->getType() << endl;
            }
        }

        break;
    }
    case 3:
    {
        cout << " NEWS " << endl;
        auto c = List_Libraly.size();
        for (auto i = c - c; i < c; i++)
        {
            if (List_Libraly.at(i)->getType() == "news")
            {
                cout << List_Libraly.at(i)->getType() << endl;
            }
        }
        break;
    }
    }
}