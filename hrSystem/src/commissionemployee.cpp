#include "commissionemployee.h"

commissionemployee::commissionemployee()
{
    //nothing to initialize
}


commissionemployee::~commissionemployee()
{
    //nothing to delete
}

void commissionemployee::commissionInput()
{
    cout<<"Enter Employee's Rate: ";
    cin>>empRate;
    cout<<endl;

    cout<<"Enter Employee's Target: ";
    cin>>empTarget;
    cout<<endl;

    empSalary=empRate*empTarget;
}

double commissionemployee::getSalary()
{
    return empRate*empTarget;
}
