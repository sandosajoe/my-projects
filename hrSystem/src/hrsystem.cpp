#include "hrsystem.h"
#include"hourlyemployee.h"
#include "manageremployee.h"
#include "salariedemployee.h"
#include "commissionemployee.h"

hrsystem::hrsystem()
{
    empss=new employee[100];
    dep=new department[100];
}

int hrsystem::findDepart(int ID)
{
    for(int i=0; i<depNum; ++i)
    {
        if(dep[i].getId()==ID)
        {
            return i;
        }
    }
    return -1;
}
void hrsystem::emp_dep(employee emp)
{
    int store=findDepart(emp.departId);
    if(store==-1)
    {
        store=depNum;
        dep[store].setID(emp.departId);
        dep[store].setName(emp.departName);
        depNum++;
    }
    department &d=dep[store];
    d.ed[d.empNum]=emp;    //ed object from department
    d.empNum++;

}
void hrsystem::addEmployee()

{
    string type;
    cout<<"What is Employee's type?:"<<endl;
    cout<<"*Hourly* ... *Salaried* ... *Manager * ... *Commission* "<<endl;
    cout<<"Enter Your Choice: ";
    cin>>type;
    cout<<endl;
    if(type=="Hourly" || type=="hourly")
    {
        hourlyemployee emp;
        emp.HourlyEmployeeInput();

        emp.empType=type;
        empss[empNum]=emp;
        emp_dep(empss[empNum]);
        cout<<"--------------------------------\n";
    }
    else if(type=="Salaried" ||type=="salaried")
    {
        salariedemployee emp;
        emp.getSalaridEmployeeInput();
        emp.empType=type;
        empss[empNum]=emp;
        emp_dep(empss[empNum]);
        cout<<"--------------------------------\n";
    }
    else if(type=="Manager" ||type=="manager")
    {
        manageremployee emp;
        emp.getManagerEmployeeData();
        emp.empType=type;
        empss[empNum]=emp;
        emp_dep(empss[empNum]);
        cout<<"--------------------------------\n";
    }
    else
    {
        commissionemployee emp;
        emp.commissionInput();
        emp.empType=type;
        empss[empNum]=emp;
        emp_dep(empss[empNum]);
        cout<<"--------------------------------\n";
    }
    empNum++;
    cout<<"Employee added Successfully! "<<endl;
    cout<<"--------------------------------\n";
}

int hrsystem::get_ID_Num(int ID)
{

    for(int i=0; i<empNum; ++i)
    {
        if(empss[i].getId()==ID)
        {
            return i;
        }
    }
    return -1;

}

void hrsystem::delEmployee(int ID)
{
    int found=get_ID_Num(ID);

    if(found==-1)
    {
        cout<<"Sorry, Can't Find Employee:(\n";
        cout<<"--------------------------------\n";
        return;
    }
    for(int i=found+1; i<empNum; ++i)
    {
        empss[i-1]=empss[i];
        cout<<"Employee Deleted Successfully!\n";
        cout<<"--------------------------------\n";
    }
    empNum--;
}

void hrsystem::showAll()
{
    if(empNum==0)
    {
        cout<<"No Employees Found!\n";
        cout<<"--------------------------------\n";
        return;
    }
    for(int i=0; i<empNum; ++i)
    {

        cout<<"\t\t\t\t\t| Employee Number "<<i+1<<"|"<<endl;
        cout<<empss[i].getDetails()<<endl;
        cout<<"--------------------------------\n";
    }
}
void hrsystem::editEmployee(int ID)
{
    int found=get_ID_Num(ID);
    if(found==-1)
    {
        cout<<"Sorry, Can't Find Employee:(\n";
        cout<<"--------------------------------\n";
        return;
    }
    empss[found].setEmpInputs();
    cout<<"--------------------------------\n";
    cout<<"Edited Successfully! \n";
    cout<<"--------------------------------\n";
}

void hrsystem::calcTotalPayroll()
{
    double totalPayroll=0;
    for(int i=0; i<empNum; ++i)
    {
        totalPayroll+=empss[i].calcPay();
    }
    cout<<"**Total Payroll is: "<<totalPayroll<<"$"<<endl;
    cout<<"--------------------------------\n";
}

void hrsystem::findEmployee(int ID)
{
    int found=get_ID_Num(ID);
    if(found==-1)
    {

        cout<<"Sorry, Can't Find Employee:(\n";
        cout<<"--------------------------------\n";
    }
    else
    {


        cout<<empss[found].getDetails()<<endl;
        cout<<"--------------------------------\n";
    }
}
void hrsystem::showDepartment(int ID)
{
    int i=findDepart(ID);
    if(i==-1)
    {
        cout<<"Sorry, Can't Find Department:("<<endl;
        cout<<"--------------------------------\n";
    }
    else
    {
        dep[i].displayDepartData();
        cout<<"--------------------------------\n";
    }
}



hrsystem::~hrsystem()
{
    delete empss;
    delete dep;
}
