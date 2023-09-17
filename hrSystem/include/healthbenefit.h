#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include"benefit.h"

class healthbenefit:public Benefit
{
public:
    healthbenefit();
    virtual ~healthbenefit();

    void setBenefitDetails();
    string getDetails();
    double calcBenefit();
protected:

private:
    string empCoverage;
    string empInfo;
};

#endif // HEALTHBENEFIT_H
