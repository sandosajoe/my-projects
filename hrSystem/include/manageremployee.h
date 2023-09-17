#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include"salariedemployee.h"

class manageremployee:public salariedemployee
{
    public:
        manageremployee();
        virtual ~manageremployee();

        void addBonus(double moreBonus);
        double getSalary();
        string getDetails();
        double getBonus();
        void getManagerEmployeeData();

    protected:

    private:
        double bonus;
};

#endif // MANAGEREMPLOYEE_H
