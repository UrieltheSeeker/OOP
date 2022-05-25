#include <iostream>
#include <vector>
#ifndef bt1_h
#define bt1_h
class staff
{
private:
    std::string Name_;
    int age_;
    char sex_;
    std::string Adress_;

public:
    staff() {}
    staff(std::string n, int a, char s, std::string ad);
    void display();
    std::string getname()
    {
        return this->Name_;
    }
};
class employee : public staff
{
private:
    int level_;

public:
    employee(std::string ne, int ae, char se, std::string ade) : staff(ne, ae, se, ade) {}
    void level(int o);
    void display();
};
class engineer : public staff
{
private:
    std::string Major_Training;

public:
    engineer(std::string ne, int ae, char se, std::string ade) : staff(ne, ae, se, ade) {}
    void get_Major(std::string);
    void display();
    // ~engineer();
};
class laborer : public staff
{
private:
    std::string work_name_;

public:
    laborer(std::string ne, int ae, char se, std::string ade) : staff(ne, ae, se, ade) {}
    void work_name(std::string w);
    // ~laborer();
    void display();
};
class Manage_employeer
{
public:
    std::vector<staff> staff_list;
    std::vector<staff> name_similary;
    // initialized the empty vector
    //+ adding the new staff
    void Add_Staff(staff &);
    //+ searching the name of staff
    // return the number of staff that have the same name
    // if not find out, return 0
    void Searching_name(std::string);
    //+Printing the information of staff list
    // based on the name of staff
    void staff_Info(std::string);
};
#endif