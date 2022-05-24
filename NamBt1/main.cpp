#include "classquanly.h"
#include "menu.h"
int main()
{
    int optional = option1();
    qlcb obj1;
    switch (optional)
    {
    case 1:
        obj1.Insert();
        break;
    case 2:
        obj1.Search();

        break;
    case 3:
        obj1.List_Employee();
        break;
    }
}