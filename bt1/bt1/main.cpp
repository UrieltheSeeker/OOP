/*
    Program: employeer information, each one has common attribute of staff as well as
    it own attribute.
    manager class: manage the information of staffs in forth program
    it has: adding staff method
            searching name -> return the number of person have that name
            staff_infor -> print out the information of person having the given name
                            if having more than 1 person, it'll print all of them
*/
#include<iostream>
#include"bt1.h"
int main()
{
    employee e1("Do Thu ha", 23, 'F', "Bach Khoa, Ha Noi");
     e1.level(3);
    engineer e2("Nguyen Van A",24,'M',"Ho tay, Ha Noi");
    e2.get_Major("Mathermaticals");
    // e2.display();
    laborer l1("Le Thi Be",23,'M',"Hoan Kiem, Ha Noi");
    l1.work_name("part-time");
    // l1.display();
    engineer b2(e2);
    Manage_employeer M1;
    M1.Add_Staff(e1);
    M1.Add_Staff(e2);
    M1.Add_Staff(l1);
    M1.Add_Staff(b2);
    M1.Searching_name("Nguyen Van A");
    M1.staff_Info("Nguyen Van A");
    return 0;
}