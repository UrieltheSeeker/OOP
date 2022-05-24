#ifndef INDICATEA_H
#define INDICATEA_H

#include "admission.h"

class indicateA :public Admission // sub class 
                                  // thi sinh thi khoi A
{
private:
    string subjectA = " TOAN, LY, HOA ";    // mon thi khoi A
public:
    void getinf() ;
    void putinf() override;
    
};
#endif