#include "benefit.h"

Benefit::Benefit()
{
    //nothing to initialize
}

Benefit::Benefit(string pType)
{
    planType=pType;
    selectAmount(planType);
}
void Benefit::setBenefit()
{
    cout<<"Choose Employee's plan Type: \n (Gold - platinum - Basic - Else)\n";
    cin>>planType;

    if(planType=="Gold" || planType=="gold" )
    {
        cout<<"Enter Amount For Gold Plan Type: ";
        cin>>gold;
        cout<<endl;
    }
    else if(planType=="platinum" || planType=="Platinum")
    {
        cout<<"Enter Amount For platinum Plan Type: ";
        cin>>platinum;
        cout<<endl;
    }
    else if(planType=="basic" || planType=="Basic")
    {
        cout<<"Enter Amount For platinum Plan Type: ";
        cin>>basic;
        cout<<endl;
    }
    else
    {
        cout<<"Enter Amount For Undefined Plan Type: ";
        cin>>notSelectedPlan;
        cout<<endl;
    }
    selectAmount(planType);
}
void Benefit::selectAmount(string planType)
{
    if(planType=="Gold" || planType=="gold" )
        amount=gold;
    else if(planType=="platinum" || planType=="Platinum")
        amount=platinum;
    else if(planType=="basic" || planType=="Basic")
        amount=basic;
    else
        amount=notSelectedPlan;
}
string Benefit::displayBenefit()
{
    cout<<"Employee's Selected Plan Type is: *"<<planType<<"* \n";
    cout<<"Employee's Amount For his Plan is: "<<amount<<endl;
    return ostringstream().str();
}
double Benefit::calcBenefit()
{
    return amount;
}

Benefit::~Benefit()
{
    ////nothing to delete
}

