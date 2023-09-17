#include <iostream>
#include"contactbook.h"
#include <string>
using namespace std;
int main()
{
    cout<<"\t\t\t\tWelcome!"<<endl;
    cout<<"\t\t\t\t--------"<<endl;
    int choice=3;
    //create object
    contactBook cont(100); //100 users
    while(choice!=0)
    {
         cout<<"--------------------------------\n";
        cout<<"Choose from the following:"<<endl;
        cout<<"--------------------------"<<endl
            <<"1-Print all contacts?\n"
            <<"2-Add new contact?\n"
            <<"3-search for a contact? \n"
            <<"4-Edit Existing contact?\n"
            <<"5- Delete existing contact? \n"
            <<"0-Quit\n"
            <<"Please  press to select your choice : \n";
        cout<<"--------------------------------\n";
        cin>>choice;
        cout<<"--------------------------------\n";
        switch(choice)
        {
        case 1:
            //Print all users
            cont.print();
            break;
        case 2:
            //Add new user
            cont.addNewContact();
            break;
        case 3:
            //search
        {
            string key;
            cout<<"Enter Your KeyWord you search for: \n";
            cin.ignore();
            getline(cin, key);
            cont.findAll(key);
        }
        break;
        case 4:
            //edit
        {
            int edit_id=0;
            cout<<"Enter Contact ID To EDIT:\n";
            cin>>edit_id;
            cont.editcontact(edit_id);
        }
        break;
        case 5:
            //delete user
            int del_id=0;
            cout<<"Enter Contact ID To Delete: \n";
            cin>>del_id;
            cont.detContact(del_id);
            break;
        }
    }
    cout<<"--------------------------------\n";
    cout<<"Thanks:)\n";
    return 0;
}
