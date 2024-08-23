#ifndef HRSYSTEM_H
#define HRSYSTEM_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Department.h"
#include "salariedEmployee.h"
#include "ManagerEmployee.h"
#include "hourlyemployee.h"
#include "CommissionEmployee.h"
#include "HealthBenefit.h"
#include "DentalBenefit.h"

using namespace std;

class HRSystem
{
public:
    HRSystem();
    ~HRSystem();

    void readFromFile(const string &filename);
    void addEmployee(employee *emp,int deptId);
    void deleteEmployee(int empId);
    void findEmployee(int empId);
    void showAll();
    double calcTotalPayroll();

private:
    vector<Department> departments;

    Department* findDepartmentById(int deptId);
    employee* findEmployeeById(int empId);

};

#endif // HRSYSTEM_H
