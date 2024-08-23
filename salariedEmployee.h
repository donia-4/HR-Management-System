#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "employee.h"

class salariedEmployee : public employee
{
    public:
        salariedEmployee();
        salariedEmployee( int,string,string,string,string);
        virtual ~salariedEmployee();
        double getSalary();
        void setSalary(double salary);
        string getDetails();

    protected:
        double salary;

    private:
};

#endif // SALARIEDEMPLOYEE_H
