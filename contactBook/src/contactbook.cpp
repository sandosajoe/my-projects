#include "contactbook.h"
contactBook::contactBook(int contact_size)
{
    m_size = contact_size;
    m_contacts = new contact[m_size];
    m_count = 0;
}
contactBook::~contactBook()
{
    delete [] m_contacts;
}
void contactBook::addNewContact()
{
    contact *new_contact = new contact();
    new_contact->SetContactId(m_count+1);
    new_contact->ReadInput();
    m_contacts[m_count++]= *new_contact;
}
void contactBook::detContact(int contact_id)
{
    if(m_count ==0)
    {
        cout<<"No Contacts Exists!\n";
        return;
    }
    bool deleted=false;
    for(int i=0 ; i<m_count ; ++i)
    {
        if(m_contacts[i].GetContactId()== contact_id)
        {  //delete from array
            if(i==m_count-1)
            {
                m_count--;
            }
            else
            {
                //replace deleted with last contact
                m_contacts[i]=m_contacts[m_count-1];
                m_count--;
            }
            deleted=true;
            break;
        }
    }
    if(deleted)
    {
        cout<<"Contact Deleted Successfully!\n";
    }
    else
    {
        cout<<"No User Exists!\n";
    }
}
void contactBook::editcontact(int contact_id)
{
    if(m_count ==0)
    {
        cout<<"No Contacts Exists!\n";
        return;
    }
    bool edited=false;
    for(int i=0 ; i<m_count ; ++i)
    {
        if(m_contacts[i].GetContactId()== contact_id)
        {
            m_contacts[i].ReadInput();
            edited=true;
            break;
        }
    }
    if(edited)
    {
        cout<<"Contact Edited Successfully!\n";
    }
    else
    {
        cout<<"No User Exists!\n";
    }
}
void contactBook::print() const
{
    if(m_count==0)
    {
        cout<<"No Contact Found!\n";
        return;
    }
    for(int i=0 ; i<m_count ; ++i)
    {
        m_contacts[i].print();
    }
}

void contactBook::findAll(string key) const
{
    int found_counter=0;
    for(int i=0 ; i<m_count ; ++i)
    {
        if(m_contacts[i].FindAny(key))
        {
            m_contacts[i].print();
            found_counter++;
        }
    }
    if(found_counter==0)
    {
        cout<<"No Contacts Founded!\n";
    }
    else
    {
        cout<<found_counter<<" Founded!\n";
    }
}
