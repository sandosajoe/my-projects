#include "manageremployee.h"

manageremployee::manageremployee()
{
    //ctor
}

manageremployee::~manageremployee()
{
    //dtor
}
void manageremployee::getManagerEmployeeData(){
getSalaridEmployeeInput();
cout<<"Enter Employee's Bonus: ";
    cin>>bonus;
    cout<<endl;
   empBonus=bonus;
}
void manageremployee::addBonus( double moreBonus )
{
    bonus+=moreBonus;
    empBonus+=moreBonus;
}

 double manageremployee::getBonus(){
 return bonus;
 }
 string manageremployee::getDetails()
{
    cout<<getDetails();
    cout<<"Employee's salary is : "<<empSalary<<" | Employee Bonus is "<<bonus<<endl;

  return nullptr;
}
double manageremployee::getSalary()
{
    return empSalary+bonus;
}
