#include "Department.h"
#include "salariedEmployee.h"
#include "ManagerEmployee.h"
#include "CommissionEmployee.h"
#include "hourlyemployee.h"
#include "HealthBenefit.h"
#include "DentalBenefit.h"

Department::Department() {}

Department::Department(int id, string name) : m_id(id), m_name(name) {}

void Department::read(ifstream &file)
{
    string line;

    getline(file, line); // skip "Department ID:"
    file >> m_id; // Read actual ID value
    file.ignore(numeric_limits<streamsize>::max(), '\n');

    getline(file, line); // skip "Department Name:"
    getline(file, m_name); // Read actual name value

    getline(file, line); // Skip "Employees" line

    while (getline(file, line) && !line.empty() && line.find("Department ID:") == string::npos)
    {
        employee* emp = nullptr;
        int id;
        string name, email, phone, jobTitle, benefitType;
        double benefitAmount;
        string benefitCoverage, benefitInfo;

        // Read employee ID
        file >> id;
        file.ignore(numeric_limits<streamsize>::max(), '\n');

        // Read employee details
        getline(file, name);
        getline(file, email);
        getline(file, phone);
        getline(file, jobTitle);

        if (jobTitle == "Salaried Employee")
        {
            emp = new salariedEmployee(id, name, email, phone, jobTitle);
            double salary;
            file >> salary;
            file.ignore(numeric_limits<streamsize>::max(), '\n');
            static_cast<salariedEmployee*>(emp)->setSalary(salary);
        }
        else if (jobTitle == "Manager Employee")
        {
            emp = new ManagerEmployee(id, name, email, phone, jobTitle);
            double salary, bonus;
            file >> salary;
            file.ignore(numeric_limits<streamsize>::max(), '\n');
            static_cast<ManagerEmployee*>(emp)->setSalary(salary);
            file >> bonus;
            file.ignore(numeric_limits<streamsize>::max(), '\n');
            static_cast<ManagerEmployee*>(emp)->setBonus(bonus);
        }
        else if (jobTitle == "Commission Employee")
        {
            emp = new CommissionEmployee(id, name, email, phone, jobTitle);
            double target, rate;
            file >> target;
            file.ignore(numeric_limits<streamsize>::max(), '\n');
            static_cast<CommissionEmployee*>(emp)->setTarget(target);
            file >> rate;
            file.ignore(numeric_limits<streamsize>::max(), '\n');
            static_cast<CommissionEmployee*>(emp)->setRate(rate);
        }
        else if (jobTitle == "Hourly Employee")
        {
            emp = new hourlyemployee(id, name, email, phone, jobTitle);
            double hoursWorked, rate;
            file >> hoursWorked;
            file.ignore(numeric_limits<streamsize>::max(), '\n');
            static_cast<hourlyemployee*>(emp)->setHoursWorked(hoursWorked);
            file >> rate;
            file.ignore(numeric_limits<streamsize>::max(), '\n');
            static_cast<hourlyemployee*>(emp)->setRate(rate);
        }

        getline(file, line);  // Skip "Benefit List:"
        getline(file, benefitType); // Read benefit type

        file >> benefitAmount;
        file.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(file, benefitCoverage);
        getline(file, benefitInfo);
        getline(file,line);//skip the blank line between employees
        if (benefitType == "Health Benefit")
        {
            HealthBenefit *benefit = new HealthBenefit(benefitAmount, benefitCoverage, benefitInfo);
            emp->setBenefit(benefit);
        }
        else if (benefitType == "Dental Benefit")
        {
            DentalBenefit *benefit = new DentalBenefit(benefitAmount, benefitInfo);
            emp->setBenefit(benefit);
        }

        employees.push_back(emp);
    }
}
void Department::print()
{
    cout << "Department ID: " << m_id << "\n";
    cout << "Department Name: " << m_name << "\n";
    for (auto emp : employees)
    {
        cout << emp->getDetails() << endl;
    }
}

Department::~Department()
{
    for (auto emp : employees)
    {
        delete emp;
    }
    employees.clear();
}

