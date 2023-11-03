#include <iostream>
using namespace std;

class InfosysEmployer; // Forward declaration for InfosysEmployer

class TCSEmployer
{
private:
    double salary;

public:
    TCSEmployer() : salary(0) {} // Constructor to initialize salary

    friend double compareSalary(TCSEmployer tcs, InfosysEmployer infosys);
};

class InfosysEmployer
{
private:
    double salary;

public:
    InfosysEmployer() : salary(0) {} // Constructor to initialize salary

    friend double compareSalary(TCSEmployer tcs, InfosysEmployer infosys);
};

double compareSalary(TCSEmployer tcs, InfosysEmployer infosys)
{
    return (tcs.salary - infosys.salary);
}

int main()
{
    TCSEmployer tcs;
    InfosysEmployer infosys;

    // Set the salaries for TCSEmployer and InfosysEmployer
    // tcs.salary = 50000.0;
    // infosys.salary = 55000.0;

    // Compare and print the salary difference
    double salaryDifference = compareSalary(tcs, infosys);
    cout << "Salary difference: $" << salaryDifference << endl;

    return 0;
}
