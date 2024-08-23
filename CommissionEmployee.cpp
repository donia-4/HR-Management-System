#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(){}

CommissionEmployee::CommissionEmployee(int id, string name, string email, string phone, string jobTitle)
{
    this->id = id;
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->jobTitle = jobTitle;
}
CommissionEmployee::~CommissionEmployee(){}

double CommissionEmployee::getSalary()
{
    return rate*target;
}
string CommissionEmployee::getDetails()
{
    return employee::displayDetails()+ "Rate : " + to_string(rate)
    + "\t target : " + to_string(target)+ "\n";
}
void CommissionEmployee::setTarget(double target)
{
    this->target = target;
}
void CommissionEmployee::setRate(double rate)
{
    this->rate= rate;
}
