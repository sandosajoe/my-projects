#include "hourlyemployee.h"
#include<iostream>
#include<string>
using namespace std;
hourlyemployee::hourlyemployee()
{
   //nothing to initialize
}


void hourlyemployee::HourlyEmployeeInput() //fkjf
{
    employee::setEmpInputs();
    cout<<"Please Enter Employee Hours Worked: ";
    cin>>empHoursWorked;
    cout<<endl;

    cout<<"Please Enter Employee Rate: ";
    cin>>empRate;
    cout<<endl;

    empSalary=empHoursWorked*empRate;

}

void hourlyemployee::setRate(double r)
{
    empRate=r;
    empSalary=empHoursWorked*empRate;
}

void hourlyemployee::addHours(int moreHours)
{
    empHoursWorked+=moreHours;
    empSalary=empHoursWorked*empRate;
}


int hourlyemployee::getHourWorked()
{
    return empHoursWorked;
}
double hourlyemployee::getRate()
{
    return empRate;
}


string hourlyemployee::DisplayHourlyEmployee()
{
    cout<<employee::getDetails();
    cout<<"Employee's Rate is: "<<empRate<<"  |  Salary is: "<<empSalary<<endl;

    return ostringstream().str();
}
hourlyemployee::~hourlyemployee()
{
   //nothing to delete
}

