#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee
{
protected:
    int employee_id;
    string name;
    int age;
    float salary;

public:
    Employee()
    {
        employee_id = 0;
        name = "";
        age = 0;
        salary = 0;
    }

    virtual void input()
    {
        cout << "Enter Employee ID: ";
        cin >> employee_id;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void display()
    {
        cout << "\nEmployee ID : " << employee_id;
        cout << "\nName        : " << name;
        cout << "\nAge         : " << age;
        cout << "\nSalary      : " << salary;
    }

    virtual ~Employee()
    {
    }
};

// Derived Class - Full Time Employee
class FullTimeEmployee : public Employee
{
private:
    float bonus;

public:
    void input()
    {

        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display()
    {

        cout << "Bonus       : " << bonus << endl;
    }
};

// Derived Class - Part Time Employee
class PartTimeEmployee : public Employee
{
private:
    int hours_worked;

public:
    void input()
    {

        cout << "Enter Hours Worked: ";
        cin >> hours_worked;
    }

    void display()
    {

        cout << "Hours Worked: " << hours_worked << endl;
    }
};

int main()
{
    Employee *employees[100];

    return 0;
}