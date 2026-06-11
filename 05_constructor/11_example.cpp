#include <iostream>
#include <vector>

using namespace std;

class Employee
{
private:
    string employee_name;
    int employee_id;
    string employee_designation;
    float employee_salary;

public:
    // Default Constructor
    Employee()
    {
        employee_name = "Not Set";
        employee_id = 0;
        employee_designation = "Not Set";
        employee_salary = 0.0;
    }

    // Parameterized Constructor
    Employee(string name, int id, string designation, float salary)
    {
        employee_name = name;
        employee_id = id;
        employee_designation = designation;
        employee_salary = salary;
    }

    // Copy Constructor
    Employee(const Employee &e)
    {
        employee_name = e.employee_name;
        employee_id = e.employee_id;
        employee_designation = e.employee_designation;
        employee_salary = e.employee_salary;
    }

    int getId() const
    {
        return employee_id;
    }

    void display() const
    {
        cout << "------------------------" << endl;
        cout << "Employee ID   : " << employee_id << endl;
        cout << "Name          : " << employee_name << endl;
        cout << "Designation   : " << employee_designation << endl;
        cout << "Salary        : " << employee_salary << endl;
        cout << "------------------------" << endl;
    }

    ~Employee()
    {
        cout << "Destructor Called" << endl;
    }
};

class EmployeeRecordManager
{
private:
    vector<Employee> employees;

public:
    void addEmployee(const Employee &e)
    {
        employees.push_back(e);
        cout << "Employee Added Successfully" << endl;
    }

    void displayAllEmployees()
    {
        if (employees.empty())
        {
            cout << "No Employee Records Found." << endl;
            return;
        }

        for (int i = 0; i < employees.size(); i++)
        {
            employees[i].display();
        }
    }

    void searchById(int id)
    {
        for (int i = 0; i < employees.size(); i++)
        {
            if (employees[i].getId() == id)
            {
                cout << "\nEmployee Found\n";
                employees[i].display();
                return;
            }
        }

        cout << "Employee Not Found." << endl;
    }
};

int main()
{
    EmployeeRecordManager admin;

    int n;

    cout << "Enter Number of Employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name, designation;
        int id;
        float salary;

        cout << "\nEnter Details of Employee " << i + 1 << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Employee ID: ";
        cin >> id;

        cout << "Designation: ";
        cin >> designation;

        cout << "Salary: ";
        cin >> salary;

        Employee e(name, id, designation, salary);

        admin.addEmployee(e);
    }

    cout << "\nAll Employee Records\n";
    admin.displayAllEmployees();

    int searchId;

    cout << "\nEnter Employee ID to Search: ";
    cin >> searchId;

    admin.searchById(searchId);

    return 0;
}