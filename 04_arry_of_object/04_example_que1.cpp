#include <iostream>
using namespace std;

class Employee
{

private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    int emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    static int emp_count;

public:
    void setEmployeeDetails()
    {

        cout << "Enter a employee id " << endl;
        cin >> emp_id;
        cin.ignore();

        cout << "Enter a employee name " << endl;
        getline(cin, emp_name);

        cout << "Enter a employee age " << endl;
        cin >> emp_age;
        cin.ignore();

        cout << "Enter a employee role " << endl;
        getline(cin, emp_role);

        cout << "Enter a employee salary  " << endl;
        cin >> emp_salary;
        cin.ignore();

        cout << "Enter a employee city " << endl;
        getline(cin, emp_city);

        cout << "Enter a employee experience " << endl;
        cin >> emp_experience;
        cin.ignore();

        cout << "Enter a employee city " << endl;
        getline(cin, emp_company_name);

        emp_count++;
    }

    void getEmployeeDetails()
    {

        cout << "employee id            " << emp_id << endl;
        cout << "employee name          " << emp_name << endl;
        cout << "employee age           " << emp_age << endl;
        cout << "employee role          " << emp_role << endl;
        cout << "employee salary        " << emp_salary << endl;
        cout << "employee city          " << emp_city << endl;
        cout << "employee experience    " << emp_experience << endl;
        cout << "employee company name  " << emp_company_name << endl;
    }

    static void totalCount()
    {

        cout << "total Count is " << emp_count << endl;
    }
};

int Employee::emp_count = 0;

int main()
{

    cout << "enter size of an array ";
    int n;
    cin >> n;

    Employee arr[n];

    for (int i = 0; i < n; i++)
    {

        arr[i].setEmployeeDetails();
    }

    for (int i = 0; i < n; i++)
    {

        arr[i].getEmployeeDetails();
    }

    Employee::totalCount();

    return 0;
}