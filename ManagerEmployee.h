#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H

#include "salariedEmployee.h"

class ManagerEmployee : public salariedEmployee
{
public:
    ManagerEmployee();
    ManagerEmployee( int id, string name, string email, string phone, string jobTitle);
    virtual ~ManagerEmployee();
    double getSalary();
    string getDetails();
    void addBonus(double morebonus);
    void setBonus(double);

protected:

private:
    double bonus;
};

#endif // MANAGEREMPLOYEE_H
