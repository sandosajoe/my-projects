#include<ctime>
#include<string>
#include<iostream>
#include"phonenumber.h"
using namespace std;
#ifndef CONTACT_H
#define CONTACT_H
class contact
{
    public:
        contact();
        virtual ~contact();
        void print() const;
        void ReadInput();
        void SetContactId(int);
        void SetFirstName(string);
        void SetLastName(string);
        void setcity(string);
        void setnote(string);
        void SetAge(int);
        void SetGenger(int);
        int GetContactId() const;
        bool FindAny(string) const;
    private:
        int id;
        string first;
        string last;
        string city;
        string note;
        int age;
        int gender; //0-male   1-female
        time_t m_added;
        phoneNumber *m_phones;
        int m_phone_size;
        int m_phone_count;
};
#endif // CONTACT_H
