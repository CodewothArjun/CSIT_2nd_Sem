#include <iostream>
using namespace std; // standard input output library.

// class declaration
class Employee2;
class Employee3;

// class for employee 1
class Employee1
{
    float salary1;
    string name1;

public:
    void Details(float income, string Nam)
    {
        name1 = Nam;
        salary1 = income;
    }
    // Function declaration
    friend void totalSalary(Employee1, Employee2, Employee3);
};

// class for employee 2
class Employee2
{
    double salary2;
    string name2;

public:
    void Details(double income, string Nam)
    {
        name2 = Nam;
        salary2 = income;
    }
    // Function declaration
    friend void totalSalary(Employee1, Employee2, Employee3);
};

// class for employee 3
class Employee3
{
    float salary3;
    string name3;

public:
    void Details(float income, string Nam)
    {
        name3 = Nam;
        salary3 = income;
    }
    // Function declaration
    friend void totalSalary(Employee1, Employee2, Employee3);
};

// Function Defining
void totalSalary(Employee1 s1, Employee2 s2, Employee3 s3)
{
    float total = s1.salary1 + s2.salary2 + s3.salary3;
    cout << "Total Salary of three Employee is " << total;
}

// Main
int main()
{
    Employee1 Emp1;
    Emp1.Details(1000, "Arjun");

    Employee2 Emp2;
    Emp2.Details(6000, "Sitaram");

    Employee3 Emp3;
    Emp3.Details(50000, "Gita");

    // Total Salary
    totalSalary(Emp1, Emp2, Emp3);

    return 0;
}