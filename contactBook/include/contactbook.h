#include"contact.h"
#include<string>
#include<iostream>
using namespace std;
#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
class contactBook
{
    public:
        contactBook(int);
        virtual ~contactBook();
        void addNewContact();
        void detContact(int);
        void editcontact(int);
        void print() const;
        void findAll(string ) const ;
    private:
        int m_count;
        int m_size;
        contact* m_contacts;
};
#endif
