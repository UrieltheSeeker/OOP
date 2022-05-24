#ifndef MANAGER_H
#define MANAGER_H
#include "libraly.h"
#include "book.h"
#include "magazine.h"
#include "news.h"
#include <vector>
#include <set>

class manager
{
private:
    std::set<int> setid; // check uinque
    vector<libraly *> List_Libraly;
    libraly *ptrLibraly;

    vector<libraly *> checkname;

public:
    manager() {}
    ~manager() {}

    void add();
    void delete_();
    void list();
    void search();
};
#endif