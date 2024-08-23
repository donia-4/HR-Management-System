#include "employee.h"

employee::employee() : id(0), benefitList(nullptr) {}

employee::employee(int id, string name, string email, string phone, string jobTitle)
    : id(id), name(name), email(email), phone(phone), jobTitle(jobTitle), benefitList(nullptr) {}

employee::~employee()
{
    if (benefitList != nullptr)
    {
        delete benefitList;
    }
}

 int employee::getId() const
{
    return id;
}
void employee::setId(int id)
{
    this->id = id;
}

string employee::getName() const
{
    return name;
}
void employee::setName(const string &name)
{
    this->name = name;
}

string employee::getEmail() const
{
    return email;
}
void employee::setEmail(const string &email)
{
    this->email = email;
}

string employee::getPhone() const
{
    return phone;
}
void employee::setPhone(const string &phone)
{
    this->phone = phone;
}

string employee::getJobTitle() const
{
    return jobTitle;
}
void employee::setJobTitle(const string &jobTitle)
{
    this->jobTitle = jobTitle;
}

benefit* employee::getBenefit() const
{
    return benefitList;
}
void employee::setBenefit(benefit* benefitList)
{
    if (this->benefitList != nullptr)
    {
        delete this->benefitList;
    }
    this->benefitList = benefitList;
}

string employee::displayDetails() const
{
    string details = "ID: " + to_string(id) + "\n";
    details += "Name: " + name + "\n";
    details += "Email: " + email + "\n";
    details += "Phone: " + phone + "\n";
    details += "Job Title: " + jobTitle + "\n";

    if (benefitList)
    {
        details += "Benefit Info: " + benefitList->displayBenefit() + "\n";
    }
    else
    {
        details += "Benefit Info: None\n";
    }

    return details;
}

