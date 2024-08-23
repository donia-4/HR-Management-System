#include "salariedEmployee.h"

salariedEmployee::salariedEmployee(){}

salariedEmployee::~salariedEmployee(){}

salariedEmployee::salariedEmployee( int id, string name, string email, string phone, string jobTitle)
    {
        this->id = id;
        this->name = name;
        this->email = email;
        this->phone = phone;
        this->jobTitle = jobTitle;
    }

double salariedEmployee::getSalary()
{
    return salary;
}
void salariedEmployee::setSalary(double salary){this->salary = salary;}

string salariedEmployee::getDetails()
{
    return displayDetails() + " , salary : " + to_string(salary) + "\n";
}
