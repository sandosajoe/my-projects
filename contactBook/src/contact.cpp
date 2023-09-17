#include"phonenumber.h"
#include "contact.h"
contact::contact()
{
    m_phone_size=5;
    m_phones= new phoneNumber[m_phone_size];

    m_phone_count=0;
    m_added=time(0);
    gender=0;
    age=0;
}
contact::~contact()
{
    delete [] m_phones;
}
void contact:: print() const
{
    cout<<"--------------------------------------\n";
    cout<<"ID: "<<id<<" | Name: "<<first<<" "<<last<<" | City is: "<<city<<endl;
    cout<<"The Notes You left is: "<<note<<endl;
    if(age>0)
        cout<<"AGE: "<<age<<endl;
    cout<<(gender==0?"MALE" : "FEMALE");
    cout<<endl;
    if(m_phone_count>0)
    {
        cout<<"PHONE LIST: \n";
        for(int i=0 ; i<m_phone_count ; ++i )
        {
            cout<<"\t"<<i+1<<" - ";
            m_phones[i].print();
        }
    }
    cout<<endl;
}
void contact::ReadInput()
{
    cout<<"Enter User Information: \n";
    cout<<"First Name is: ";
    cin>>first;
    cout<<"Last Name is: ";
    cin>>last;
    cout<<"City is: ";
    cin>>city;
    cout<<"Please leave Your notes Here:";
    cin.ignore();
    getline(cin, note);
    cout<<"Age is: " ;
    cin>>age;
    cout<<"Gender (0-Male  1-Female): ";
    cin>>gender;
    int n=0;
    cout<<"How many Phones (0-"<<m_phone_size<<")?";
    cin>>n;
    cin.ignore();
    for(int i=0 ; i<n ; ++i)
    {
        cout<<"----------------------------"<<endl;
        string data, type, desc;
        cout<<"Phone Number ("<<i+1<<") : ";
        getline(cin, data);
        cout<<"Type: ";
        getline(cin, type);
        phoneNumber * new_phone = new phoneNumber(data, type);
        m_phones[m_phone_count++]=*new_phone;
    }
}
void contact::SetContactId(int dd)
{
    id=dd;
}
void contact::setcity(string c)
{
    city=c;
}

void contact::setnote(string no)
{
    note=no;
}
void contact::SetFirstName(string f)
{
    first=f;
}
void contact::SetLastName(string l)
{
    last=l;
}
void contact:: SetAge(int g)
{
    age=g;
}
void contact::SetGenger(int gen)
{
    gender=gen;
}

int contact::GetContactId() const
{
    return id;
}
bool contact::FindAny(string key) const
{
    if(first.compare(key)==0 || last.compare(key)==0)
    {
        return true;
    }
    if(m_phone_count>0)
    {
        //search in phones
        for(int i=0 ; i< m_phone_count ; ++i)
        {
            if(m_phones[i].isMatched(key))
                return true;
        }
    }
    return false;
}
