#include "healthbenefit.h"
#include<iostream>
#include<string>
using namespace std;

healthbenefit::healthbenefit()
{
    //nothing to initialize
}

void healthbenefit::setBenefitDetails()
{
    Benefit::setBenefit();
    cout<<"Enter Coverage: \n";
    cin.ignore();
    getline(cin,empCoverage);
    cout<<endl;

    cout<<"Enter Information: \n";
    cin.ignore();
    getline(cin,empInfo);
    cout<<endl;

}
string healthbenefit::getDetails()
{
    Benefit::displayBenefit();
    cout<<"Health Coverage is: "<<empCoverage<<endl;
    cout<<"Health Info is: "<<empInfo<<endl;
    return nullptr;

}

double healthbenefit::calcBenefit()
{
    amount=0.2*amount;
    return amount;
}

healthbenefit::~healthbenefit()
{
   //nothing to delete
}
