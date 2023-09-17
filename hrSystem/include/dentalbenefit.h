#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include"benefit.h"
#include<bits/stdc++.h>
using namespace std;
class dentalbenefit:public Benefit
{
    public:
        dentalbenefit();
        virtual ~dentalbenefit();

          void setBenefitDetails();
      string getDetails();
    double calcBenefit();

    protected:

    private:
        string empInfo;
};

#endif // DENTALBENEFIT_H
