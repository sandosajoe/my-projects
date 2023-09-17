#include<iostream>
#include<string>
using namespace std;
#ifndef PHONENUMBER_H
#define PHONENUMBER_H
class phoneNumber
{
    public:
        phoneNumber();
        phoneNumber(string , string);
        virtual ~phoneNumber();
        void setPhone(string);
        void setType(string);
        bool isMatched(string) const;
        void print() const;
    private:
        string m_phone;
        string m_type;
};
#endif
