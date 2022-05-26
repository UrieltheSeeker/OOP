#include "student_class.h"

void student_class::add()
{
    cout << " Add new data " << endl;

    ptrStudent = new student;
    ptrStudent->getinf();
    List_Student.push_back(ptrStudent);
}

void student_class::list()
{
    auto n = List_Student.size();
    for (auto i = n-n; i<n; i++)
    {
        if(List_Student.at(i)->GetYearOld() == 20 )
        {
            List_Student.at(i)->putinf();
        }
    }
}

int student_class::count()
{
    int count = 0;
    auto n = List_Student.size();
    for ( auto i = n-n; i<n; i++)
    {
        if( List_Student.at(i)->GetYearOld() == 23 && List_Student.at(i)->GetHOmeTown() == "DN" )
        {
            count +=1;
        }
    }
    return count;

    cout << count << endl;
}
