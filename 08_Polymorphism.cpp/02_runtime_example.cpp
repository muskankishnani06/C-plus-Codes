#include <iostream>

using namespace std;

class Employee
{

public:
    virtual void work()
    {
        cout << "Employee perform the tasks " << endl;
    }
};

class Developer : public Employee
{

public:
    void work() override
    {

        cout << "Developer is Developing " << endl;
    }
};
class Designer : public Employee
{

public:
    void work() override
    {

        cout << "designer is designing " << endl;
    }
};

int main()
{

    Employee *emp;

    Developer d;

    emp = &d;
    emp->work();

    Designer dg;

    emp = &dg;
    emp->work();

    return 0;
}