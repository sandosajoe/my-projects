#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include"employee.h"

class salariedemployee:public employee
{
    public:
        salariedemployee();
        double salariedSalary;

        string getDetails();
        double getSalary();

        void getSalaridEmployeeInput();
        virtual ~salariedemployee();

    protected:

    private:
};

#endif // SALARIEDEMPLOYEE_H
