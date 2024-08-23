#include "HRSystem.h"

HRSystem::HRSystem() {}

HRSystem::~HRSystem()
{
    for (Department &dept : departments)
    {
        for (employee *emp : dept.getEmployees())
        {
            delete emp;
        }
    }
}

void HRSystem::readFromFile(const string &filename)
{
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Unable to open file: " << filename << endl;
        return;
    }

    while (!file.eof()) {
        Department dept;
        dept.read(file);
        departments.push_back(dept);

        // Skip the line with dashes that separates departments
        string separator;
        getline(file, separator);
    }

    file.close();
}

void HRSystem::addEmployee(employee *emp, int deptId)
{
    Department *dept = findDepartmentById(deptId);
    if (dept != nullptr)
    {
        dept->getEmployees().push_back(emp);
    }
    else
    {
        cerr << "Department with ID " << deptId << " not found." << endl;
    }
    ofstream out("D:\\Dr Mahmoud Projects\\Hr Management System\\departments_and_employees.txt");
    out << emp->getDetails()<<"\n";
    out.close();
}

void HRSystem::deleteEmployee(int empId)
{
    for (Department &dept : departments)
    {
        vector<employee*> &emps = dept.getEmployees();
        auto it = remove_if(emps.begin(), emps.end(), [empId](employee *emp)
        {
            if (emp->getId() == empId)
            {
                delete emp;
                return true;
            }
            return false;
        });

        if (it != emps.end())
        {
            emps.erase(it, emps.end());
            cout << "Employee with ID " << empId << " deleted." << endl;
            return;
        }
    }

    cerr << "Employee with ID " << empId << " not found." << endl;
}


void HRSystem::findEmployee(int empId)
{
    employee *emp = findEmployeeById(empId);
    if (emp != nullptr)
    {
        cout << emp->displayDetails() << endl;
    }
    else
    {
        cerr << "Employee with ID " << empId << " not found." << endl;
    }
}

void HRSystem::showAll()
{
    for (Department &dept : departments)
    {
        dept.print();
        cout << endl;
    }
}

double HRSystem::calcTotalPayroll()
{
    double totalPayroll = 0.0;

    for ( Department &dept : departments)
    {
        for ( employee *emp : dept.getEmployees())
        {
            totalPayroll += emp->getSalary();
        }
    }

    return totalPayroll;
}

Department* HRSystem::findDepartmentById( int deptId)
{
    for (Department &dept : departments)
    {
        if (dept.getId() == deptId)
        {
            return &dept;
        }
    }

    return nullptr;
}

employee* HRSystem::findEmployeeById( int empId)
{
    for (const Department &dept : departments)
    {
        for (employee *emp : dept.getEmployees())
        {
            if (emp->getId() == empId)
            {
                return emp;
            }
        }
    }

    return nullptr;
}

