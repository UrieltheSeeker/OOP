#include "classquanly.h"
#include "mode.h"
bool qlcb::Insert()   //nhap du lieu 
{
    int khaibao2 = option2();
    switch (khaibao2)
    {
    case 1:
        cout << " Laborer data " << endl;
        prtEmployee = new Laborer;
        prtEmployee->getinf();
        dscb_.push_back(prtEmployee);
        return true;
        break;
    case 2:
        cout << " Engineer data " << endl;
        prtEmployee = new Engineer;
        prtEmployee->getinf();
        dscb_.push_back(prtEmployee);
        return true;
        break;
    case 3:
        cout << " Officer data " << endl;
        prtEmployee = new Officer;
        prtEmployee->getinf();
        dscb_.push_back(prtEmployee);
        return true;
    default:
        return false;
        break;
    }
}
void qlcb::Search() //tim kiem 
{
    string timkiem;
    cout << " Enter name: " << timkiem << endl;
    cin >> timkiem;

    int cnt = 0;
    auto a = dscb_.size();
    for (auto i = a-a; i < a; i++ )
    {
        if (dscb_.at(i)->getName() == timkiem){
            cnt++;
            name_similary.push_back(dscb_.at(i));
        }
    }
    cout << " Name:" << prtEmployee->getName() << endl;
    cout << " Role:" << prtEmployee->getType() << endl;

    // employee *ptrDSCB = dscb_.at(a-a);
    // while (ptrDSCB != dscb_.at(a))
    // {
    //     if(ptrDSCB->getName() == timkiem){
    //         cout<<"hahah";
    //     }
    //     ptrDSCB++;
    // }
    
    // return true;
    // for (int i = 0; i < a; i++)
    // {
    //     if *(ptrDSCB.at(i)->getName() == timkiem )
        
    //         return true;
    //         cout << " Name:" << prtEmployee->getName() << endl;
    //         cout << " Role:" << prtEmployee->getType() << endl;
    //     }
    // }
    // find (dscb_.begin(), dscb_.end(), timkiem)
}
void qlcb::List_Employee() // danh sach 
{
    auto n = dscb_.size();
    for (auto i = n-n; i<n; i++ )
    {
        dscb_.at(i)->putinf();
    }
}