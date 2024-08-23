#include <iostream>
#include "HRSystem.h"
using namespace std;

int main()
{
    HRSystem hr;
    hr.readFromFile("D:\\Dr Mahmoud Projects\\Hr Management System\\departments_and_employees.txt");
    hr.showAll();

    salariedEmployee ss(1,"Donia Shaban","doniashaban723@gmail.com","01144821150","Salaried Employee");
    ss.setSalary(50000);
    HealthBenefit hb(9500,"full coverage","Premium Executive Plan");
    benefit* benefitList = &hb; // abstract class

    ss.setBenefit(benefitList);

    employee *emp = &ss; //abstract class

    hr.addEmployee(emp, 1);

    hr.findEmployee(104);

    cout << hr.calcTotalPayroll() << "\n";

    hr.deleteEmployee(104);

    hr.findEmployee(104);

    hr.showAll();

    return 0;
}

