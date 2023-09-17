#include "department.h"

department::department()
{
    ed=new employee[100];
}

department::department(int id, string name)
{
    departId=id;
    departName=name;
}
int department::getId()
{
    return departId;
}

void department::setID(int ID)
{
    departId=ID;
}
string department::getName()
{
    return departName;
}
void department::setName(string name)
{
    departName=name;
}
void department::displayDepartData()
{
    cout<<"Department Name is: "<<departName<<endl;
    cout<<"Department ID is: "<<departId<<endl;
    cout<<"Department Employees are :"<<endl;
    for(int i=0; i<empNum; ++i)
    {
        cout<<"Employee number "<<i+1<<" --> Name is "<<ed[i].getName()<<" -->ID is "<<ed[i].getId()<<endl;
    }
}
department::~department()
{
    delete ed;
}
