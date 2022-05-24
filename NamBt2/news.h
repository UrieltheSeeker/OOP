#ifndef NEWS_H
#define NEWS_H
#include "libraly.h"

struct date
{
    int day;
    int month;
    int year;
};

class news : public libraly // sub class 3
{
private:
    // string release_day;   // ngay phat hanh
    date relaese_day;
    string type = "news";
public:
    void getinf() override;
    void putinf() override;
    string Type();
};
#endif