#include "student_class.h"
#include "mode.h"
int main()
{
    student_class obj1;

    int optional = mode();
    switch (optional)
    {
    case 1:
        obj1.add();
        break;
    case 2:
        obj1.list();
        break;
    case 3:
        obj1.count();
        break;
    }
}