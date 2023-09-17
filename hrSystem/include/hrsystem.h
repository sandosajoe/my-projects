#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include"employee.h"
#include"department.h"

class hrsystem
{
public:
    hrsystem();
    virtual ~hrsystem();
    void showDepartment(int ID);
    void addEmployee();
    void delEmployee(int ID);
    void calcTotalPayroll();
    void editEmployee(int ID);
    void findEmployee(int ID);
    void showAll();
    int get_ID_Num(int ID);
    void emp_dep(employee emp);
    int findDepart(int ID);
protected:

private:
    int empNum=0;
    employee* empss;
    int depNum=0;
    department* dep;

};

#endif // HRSYSTEM_H
