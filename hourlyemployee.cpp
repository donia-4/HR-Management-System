#include "hourlyemployee.h"

hourlyemployee::hourlyemployee(){}

hourlyemployee::~hourlyemployee(){}

hourlyemployee::hourlyemployee(unsigned int id, string name, string email, string phone, string jobTitle)
{
    this->id = id;
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->jobTitle = jobTitle;
}

string hourlyemployee::getDetails()
{
    return employee::displayDetails()+ "Hours Worked : " + to_string(hoursWorked)
    +"\t  Rate : " + to_string(rate) + "\n";
}
double hourlyemployee::getSalary()
{
    return hoursWorked*rate;
}
void hourlyemployee::setHoursWorked (double hoursWorked){ this->hoursWorked = hoursWorked;}

void hourlyemployee::setRate (double rate){ this->rate = rate;}

void hourlyemployee::addHours(int moreHours){hoursWorked += moreHours;}
