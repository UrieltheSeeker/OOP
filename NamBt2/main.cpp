#include "manager.h"
// #include "mode.h"
#include "menu.h"

int main()
{
    int optional = mode_outter();
    manager obj1;
    switch (optional)
    {
    case 1:
    {
        obj1.add();
        if (_contineous_())
        {
            main();
        }

        break;
    }
    case 2:
    {
        obj1.delete_();
        if (_contineous_())
        {
            main();
        }
        break;
    }
    case 3:
    {
        obj1.list();
        if (_contineous_())
        {
            main();
        }
        break;
    }
    case 4:
    {
        obj1.search();
        if (_contineous_())
        {
            main();
        }
        break;
    }
    }
}