#ifndef BOOK_H
#define BOOK_H
#include "libraly.h"

class book : public libraly // sub class 1
{
private:
    string author_name; // ten tac gia
    int page_number;    // so trang
    string type = "book";
public:
    void getinf() override;
    void putinf() override;
    string Type();
    
};
#endif