#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "employee.h"

class CommissionEmployee : public employee
{
    public:
        CommissionEmployee();
        CommissionEmployee( int id, string name, string email, string phone, string jobTitle);
        virtual ~CommissionEmployee();
        double getSalary();
        string getDetails();
        void setTarget(double);
        void setRate(double);

    protected:

    private:
        double target,rate;
};

#endif // COMMISSIONEMPLOYEE_H
