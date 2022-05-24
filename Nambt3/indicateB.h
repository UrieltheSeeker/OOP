#ifndef INDICATEB_H
#define INDICATEB_H

#include "admission.h"

class indicateB : public Admission  // sub class 
                                    // thi sinh thi khoi B
{
private:
    string subjectB = " TOAN, HOA, SINH ";  // mon thi khoi B
public:
    void getinf() ;
    void putinf() override;
    
};
#endif