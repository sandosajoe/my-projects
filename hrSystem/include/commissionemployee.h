#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include<iostream>
#include<string>
using namespace std;
#include"employee.h"
class commissionemployee :public employee
{
public:
    commissionemployee();

    double empRate;
    double empTarget;
    string getDetails();
    double getSalary();
    void commissionInput();

    virtual ~commissionemployee();

protected:

private:
};

#endif // COMMISSIONEMPLOYEE_H
