#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string.h>
#include"Benefit.h"
#include<bits/stdc++.h>
using namespace std;

class employee
{
public:
    employee();
    void setEmpInputs();
    string getDetails();
    // void getDetails(); // i will return here if error
    string getType();
    string getName();
    string getPhone();
    int getId();
    string getEmail();
    string getJobTitle();
    void setPhone(string ph);
    void setEmail(string em);
    void setJobTitle(string jo);
    virtual double getSalary();
    double calcPay();

    string empType;
    string departName;
    int departId;
    virtual ~employee();
protected:
    double empSalary=0;
    double empBonus=0;
    string empName;
    string empPhone;
    string empEmail;
    int empId;
    string empJobTitle;
private:
    int benefitNum=0;
    Benefit *Bene_List;
};

#endif // EMPLOYEE_H
