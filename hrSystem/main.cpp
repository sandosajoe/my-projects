#include <iostream>
#include"hrsystem.h"
#include<string>

using namespace std;

int main()
{
    cout<<"\t\t\t\t\t:) WELCOME TO HR MANAGEMENT SYSTEM :)"<<endl;
    cout<<"\t\t\t\t\t *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
    hrsystem hrsys;
    int choice;
    int id;
s:
    cout<<"Please Select The Operation You Want: \n";
    do
    {
        cout<<"1- Add New Employee\n"
            <<"2- Delete Existing Employee\n"
            <<"3- Edit An Existing Employee\n"
            <<"4- Search For An Employee\n"
            <<"5- Print Saved Employees\n"
            <<"6- Calculate Total Payroll\n"
            <<"7- Print Employees And Their Department\n"
            // <<"8- Edit Benefit\n"
            //<<"9- Delete Benefit\n"
            <<"0- Exit The Program\n"
            <<"<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:\n";
        cin>>choice;
        if (choice>7 || choice <0)
        {
            cout<<"Not Valid Choice, Please Enter A Valid One: \n";
            cout<<"<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:\n";
            cout<<endl;
            goto s;
        }
        cout<<"<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:<:\n";
        cout<<endl;


        switch(choice)
        {
        case 1:
            cout<<"DO THE FOLLOWING STEPS TO ADD EMPLOYEE: \n";
            hrsys.addEmployee();
            break;

        case 2:
            cout<<"Please Enter ID To Delete: ";
            cin>>id;
            cout<<endl;
            hrsys.delEmployee(id);
            break;
        case 3:
            cout<<"Please Enter ID To Edit: ";
            cin>>id;
            cout<<endl;
            hrsys.editEmployee(id);
            break;
        case 4:
            cout<<"Please Enter ID To Search For:";
            cin>>id;
            cout<<endl;
            hrsys.findEmployee(id);
            break;
        case 5:
            cout<<"Ok! WE WILL DISPLAY EMPLOYEES: \n";
            hrsys.showAll();
        case 6:
            cout<<"CALCULATING TOTAL PAYROLL:\n";
            hrsys.calcTotalPayroll();
        case 7:
            cout<<"Please Enter ID For Your Department:";
            cin>>id;
            cout<<endl;
            hrsys.showDepartment(id);
            break;
            // case 8:
            //case 9:
        }
    }
    while(choice!=0);

    cout<<endl<<"\t\t\t\t\t :) THANKS :)"<<endl;
    return 0;
}
