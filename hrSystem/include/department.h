#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include"employee.h"

class department

{
public:
    int empNum=0;
    department();
    department(int id, string name);
    ~department();
    employee *ed;

    int getId();
    void setID(int ID);
    string getName();
    void setName(string name);

    void displayDepartData();
protected:

private:
    int departId;
    string departName;
};

#endif // DEPARTMENT_H
