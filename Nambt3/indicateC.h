#ifndef INDICATEC_H
#define INDICATEC_H

#include "admission.h"
class indicateC : public Admission  // sub class 
                                    // thi sinh thi khoi C
{
private:
    string subjectC = " VAN, SU, DIA ";  // mon thi khoi C

public:
    void getinf() ;
    void putinf() override;
    string getType();
};
#endif