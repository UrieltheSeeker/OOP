#include "bt1.h"
staff::staff(std::string n, int a, char s, std::string ad)
{
    Name_ = n;
    age_ = a;
    sex_ = s;
    Adress_ = ad;
}
void staff::display()
{
    std::cout << "Name: " << Name_ << '\n';
    std::cout << "Age: " << age_ << '\n';
    std::cout << "Sex..." << '\n';
    std::cout << "M-Male/F-Female: " << sex_ << '\n';
}

void employee::level(int o)
{
    level_ = o;
}
void employee::display()
{
    staff::display();
    std::cout << "Order: " << level_ << '\n';
}
void engineer::get_Major(std::string m)
{
    Major_Training = m;
}
void engineer::display()
{
    staff::display();
    std::cout << "Major Training: " << Major_Training << '\n';
}
void laborer::work_name(std::string w)
{
    work_name_ = w;
}
void laborer::display()
{
    staff::display();
    std::cout << "Laborer Work name: " << work_name_ << '\n';
}

void Manage_employeer::Add_Staff(staff&obj){
    staff_list.push_back(obj);
}
 void Manage_employeer::Searching_name(std::string name){
     int cnt = 0;
     auto n=staff_list.size();
     for(auto i=n-n; i<n; i++){
         if(staff_list.at(i).getname()== name){
             cnt++;
             name_similary.push_back(staff_list.at(i));
         }
     }
    std::cout<<"Having "<<cnt<<" person name "<<name<<std::endl;
 }

void Manage_employeer::staff_Info(std::string name){
    auto n=staff_list.size();
    for(auto i=n-n; i< n; i++){
         if(staff_list.at(i).getname()== name){
         staff_list.at(i).display();
         }
}
}
// int main()
// {
//     employee e1("Do Thu ha", 23, 'F', "Bach Khoa, Ha Noi");
//      e1.level(3);
//     engineer e2("Nguyen Van A",24,'M',"Ho tay, Ha Noi");
//     e2.get_Major("Mathermaticals");
//     // e2.display();
//     laborer l1("Le Thi Be",23,'M',"Hoan Kiem, Ha Noi");
//     l1.work_name("part-time");
//     // l1.display();
//     engineer b2(e2);
//     Manage_employeer M1;
//     M1.Add_Staff(e1);
//     M1.Add_Staff(e2);
//     M1.Add_Staff(l1);
//     M1.Add_Staff(b2);
//     M1.Searching_name("Nguyen Van A");
//     M1.staff_Info("Nguyen Van A");
//     return 0;
// }