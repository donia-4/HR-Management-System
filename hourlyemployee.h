#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "employee.h"

class hourlyemployee : public employee
{
    public:
        hourlyemployee();
        hourlyemployee(unsigned int,string,string,string,string);
        virtual ~hourlyemployee();
        string getDetails();
        double getSalary();
        void setHoursWorked (double);
        void setRate(double);
        void addHours(int moreHours);
    protected:

    private:
        double hoursWorked,rate;
};

#endif // HOURLYEMPLOYEE_H
