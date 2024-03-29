#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int employeeId;

    double incomeTaxCalc(double salary)
    {
        if (salary < 300000)
            return 0;
        else if (salary >= 300001 && salary < 600000)
            return 0.05 * salary;
        else if (salary >= 600000 && salary < 900000)
            return 0.1 * salary;
        else
            return 0.2 * salary;
    }
    double incomeTaxCalc(double salary, int perks)
    {
        if (salary < 300000 && perks < 10000)
            return 0;
        else if (salary >= 300001 && salary < 600000 && perks < 10000)
            return 0.05 * salary;
        else if (salary >= 600000 && salary < 900000 && perks < 10000)
            return 0.1 * salary;
        else if (salary >= 300001 && salary < 600000 && perks >= 10000)
            return 0.05 * salary + 0.02 * perks;
        else if (salary >= 600000 && salary < 900000 && perks >= 10000)
            return 0.1 * salary + 0.02 * perks;
        else if (salary >= 900000 && perks >= 10000)
            return 0.2 * salary + 0.02 * perks;
        else
            return 0.25 * salary;
    }
};

int main()
{
    Employee E1;
    int perks;
    double employeeSalary;
    cout << "Enter Employee's name --> ";
    cin >> E1.name;
    cout << "Enter Employee's id --> ";
    cin >> E1.employeeId;
    cout << "Name of Employee --> " << E1.name << endl;
    cout << "Employee ID --> " << E1.employeeId << endl;
    cout << "Enter Salary of Employee " << endl;
    cin >> employeeSalary;
    cout << "Enter Perks of Employee " << endl;
    cin >> perks;
    cout << "Income Tax to be paid by Employee --> " << E1.incomeTaxCalc(employeeSalary, perks) << endl;

    return 0;
}