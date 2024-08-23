#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <algorithm>
#include "benefit.h"

using namespace std;

class employee
{
public:
    employee();
    employee( int id, string name, string email, string phone, string jobTitle);
    virtual ~employee();

    int getId() const;
    void setId( int id);

    string getName() const;
    void setName(const string &name);

    string getEmail() const;
    void setEmail(const string &email);

    string getPhone() const;
    void setPhone(const string &phone);

    string getJobTitle() const;
    void setJobTitle(const string &jobTitle);

    benefit* getBenefit() const;
    void setBenefit(benefit* benefitList);


    virtual double getSalary()  = 0;
    virtual string getDetails() = 0;
    virtual string displayDetails() const;

protected:
    int id;
    string name;
    string email;
    string phone;
    string jobTitle;
    benefit* benefitList;
};

#endif // EMPLOYEE_H
