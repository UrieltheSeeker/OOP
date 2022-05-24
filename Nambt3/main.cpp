#include "manager.h"
#include "menu.h"
// #include "mode.h"

int main()
{
    int optional = outter();
    manager obj1;
    switch (optional)
    {
    case 1:
        obj1.add();
        break;
    case 2:
        obj1.list();
        break;
    case 3:
        obj1.search();
        break;
    }
}
