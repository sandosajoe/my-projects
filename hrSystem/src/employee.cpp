#include "employee.h"
#include"Benefit.h"
#include<iostream>
#include<string>
using namespace std;
employee::employee()
{
    Bene_List=new Benefit[100];
}

void employee::setEmpInputs()
{
    cout<<"Please Enter Employee's Name -> ";
    cin.ignore();
    getline(cin,empName);
    cout<<endl;

    cout<<"Please Enter Employee's ID -> ";
    cin>>empId;
    cout<<endl;

    cout<<"Please Enter Employee's Job Title -> ";
    cin.ignore();
    getline(cin,empJobTitle);
    cout<<endl;

    cout<<"Please Enter Employee's Email -> ";
    cin>>empEmail;
    cout<<endl;

    cout<<"Please Enter Employee's Phone Number -> ";
    cin>>empPhone;
    cout<<endl;

    cout<<"Please Enter Employee's Department name -> ";
    cin.ignore();
    getline(cin,departName);
    cout<<endl;

    cout<<"Please Enter Employee's Department ID -> ";
    cin>>departId;
    cout<<endl;

    cout<<"Please Enter Employee's Number Of Benefits -> ";
    cin>>benefitNum;
    cout<<endl;

    for(int i=0 ; i<benefitNum ; ++i)
    {
        cout<<"Benefit Number "<<i+1 <<" : ";
        Bene_List[i].setBenefit();
        cout<<endl;
    }
}
string employee::getName()
{
    return empName;
}

int employee::getId()
{
    return empId;
}

string employee::getPhone()
{
    return empPhone;
}
string employee::getEmail()
{
    return empEmail;
}
string employee::getJobTitle()
{
    return empJobTitle;
}
void employee::setEmail(string em)
{
    empEmail=em;
}
void employee::setPhone(string ph)
{
    empPhone=ph;
}
void employee::setJobTitle(string jo)
{
    empJobTitle=jo;
}


string employee::getDetails()
{
    cout<<"Employee's Name is: "<<empName<<endl;
    cout<<"Employee's ID is: "<<empId<<endl;
    cout<<"Employee's Department Name is: "<<departName<<endl;
    cout<<"Employee's Department ID is: "<<departId<<endl;

    cout<<"Employee's Phone Number is: "<<empPhone<<endl;
    cout<<"Employee's Email is: "<<empEmail<<endl;
    cout<<"Employee's Job TiTle is: "<<empJobTitle<<endl;
    cout<<"Employee's Salary is: "<<getSalary()<<endl;
    cout<<"Employee's Number Of Benefits is: "<<benefitNum<<endl;
    cout<<"Benefit Details is Displayed Below:) \n";
    for(int i=1 ; i<=benefitNum ; ++i)
    {
        cout<<i<<"- "<<Bene_List[i].displayBenefit()<<endl;
    }

    return ostringstream().str();
}

double employee::getSalary()
{
    return empSalary;
}
double employee::calcPay()
{
    return empSalary+empBonus;
}

employee::~employee()
{

}
