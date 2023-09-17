#include "dentalbenefit.h"
#include<iostream>
#include<string>
using namespace std;
dentalbenefit::dentalbenefit()
{
    //nothing to initialize
}


dentalbenefit::~dentalbenefit()
{
    //nothing to delete
}


void dentalbenefit::setBenefitDetails()
{
    Benefit::setBenefit();
    cout<<"Enter Info: ";
    cin>>empInfo;
    cout<<endl;
}

string dentalbenefit::getDetails()
{
    Benefit::displayBenefit();
    cout<<"Dental Info is: "<<empInfo<<endl;
    return ostringstream().str();
}

double dentalbenefit::calcBenefit()
{
    amount=0.1*amount;
    return amount;
}
