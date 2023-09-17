#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "employee.h"
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

class hourlyemployee :public employee
{
public:
    hourlyemployee();
    void addHours(int moreHours);
    void setRate(double r);

    int getHourWorked();
    double getRate();
    void HourlyEmployeeInput();
    string DisplayHourlyEmployee();
    virtual ~hourlyemployee();
protected:

private:
    double empHoursWorked;
    double empRate;
};

#endif // HOURLYEMPLOYEE_H
