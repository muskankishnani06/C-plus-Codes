#include <iostream>
using namespace std;

class Employee
{

public:
    void salary()
    {

        cout << "Employee salary has been Credited" << endl;
    }
};

class Manager : public Employee
{

public:
    void managingTeam()
    {

        cout << "Manager managing a Team " << endl;
    }
};
class Developer : public Employee
{

public:
    void developingWeb()
    {

        cout << "Developer Developing Website " << endl;
    }
};

int main()
{
    Developer d;

    d.developingWeb();
    d.salary();

    Manager m;

    m.managingTeam();
    m.salary();


    return 0;
}
