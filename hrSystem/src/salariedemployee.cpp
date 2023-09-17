#include "salariedemployee.h"
#include<iostream>
#include<string>
using namespace std;
salariedemployee::salariedemployee()
{
   //nothing to initialize
}

void salariedemployee::getSalaridEmployeeInput(){
 setEmpInputs();
 cout<<"Enter Employee Salary: ";
 cin>>salariedSalary;
 empSalary=salariedSalary;

}
 string salariedemployee::getDetails(){
 cout<<employee::getDetails();
 cout<<"Salary is: "<<salariedSalary<<endl;
 return nullptr;
 }

 double salariedemployee::getSalary()
{
    return salariedSalary;
}
salariedemployee::~salariedemployee()
{
    //dtor
}
