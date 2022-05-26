#include "town.h"
#include "menu.h"

int main()
{
    town obj1;

    int optional = mode();
    switch (optional)
    {
    case 1:
        int n;
        cout << " Insert N: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            obj1.add();
        }
        break;
    case 2:
        obj1.list();
        break;
    }
}
