#include "phonenumber.h"
phoneNumber::phoneNumber()
{}
phoneNumber::phoneNumber(string phone_num , string Type_num){
setPhone( phone_num );
setType( Type_num);
}
phoneNumber::~phoneNumber()
{}
        void phoneNumber:: setPhone(string  phone_num ){
             m_phone=phone_num;
        }
        void phoneNumber::setType(string Type_num){
         m_type=Type_num;
        }

        bool phoneNumber::isMatched(string key) const{
            return (m_phone.compare(key)==0);

        }
        void phoneNumber::print() const{
            cout<<"Phone Number : "<<m_phone<<" | "<<m_type<<endl;
        }
