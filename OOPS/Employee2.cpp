#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int employeeId;
    int salary;

    employee(string n, int id, int s)
    {
        name = n;
        employeeId = id;
        salary = s;
    }
};

int main()
{
    string name;
    int id, salary;
    cout << "Enter Employee's name --> ";
    cin >> name;
    cout << "Enter Employee's id --> ";
    cin >> id;
    cout << "Enter Employee's salary --> ";
    cin >> salary;

    employee e1(name, id, salary);

    cout << "Name of Employee --> " << e1.name << endl;
    cout << "Employee ID --> " << e1.employeeId << endl;
    cout << "Salary --> " << e1.salary << endl;

    return 0;
}