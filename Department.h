#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "employee.h"

using namespace std;

class Department
{
public:
    Department();
    Department(int id, string name);
    void read(ifstream &file);
    void print();
    virtual ~Department();

     int getId() const { return m_id; }
    string getName() const { return m_name; }
    vector<employee*> getEmployees() const { return employees; }
    vector<employee*>& getEmployees() {return employees ;}

private:
     int m_id;
    string m_name;
    vector<employee*> employees;
};

#endif // DEPARTMENT_H
