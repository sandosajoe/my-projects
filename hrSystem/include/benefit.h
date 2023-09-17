#ifndef BENEFIT_H
#define BENEFIT_H
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

class Benefit
{
public:
    Benefit();
    double amount=0;
    string planType;
    Benefit(string pType);
    int basic;
    int platinum;
    int gold;
    int notSelectedPlan;

    ~Benefit();
    void setBenefit();
    void selectAmount(string planType);
    double calcBenefit();
    string displayBenefit();

protected:

private:


};

#endif // BENEFIT_H
