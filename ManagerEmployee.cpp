#include "ManagerEmployee.h"

ManagerEmployee::ManagerEmployee(){}

ManagerEmployee::~ManagerEmployee(){}

ManagerEmployee::ManagerEmployee( int id, string name, string email, string phone, string jobTitle)
{
    this->id = id;
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->jobTitle = jobTitle;
}

double ManagerEmployee::getSalary()
{
    return salary+bonus;
}
string ManagerEmployee::getDetails()
{
    return salariedEmployee::getDetails()+ "Bonus : " + to_string(bonus);
}
void ManagerEmployee::addBonus(double morebonus)
{
    bonus+=morebonus;
}
void ManagerEmployee::setBonus(double bonus)
{
    this->bonus = bonus;
}
