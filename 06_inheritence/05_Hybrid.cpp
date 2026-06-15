#include <iostream>

using namespace std;
class A
{

public:
    void gradeA()
    {

        cout << " this is class A " << endl;
    }
};
class B : public A
{

public:
    void gradeB()
    {

        cout << "this is class B " << endl;
    }
};
class C : public B, public A
{

public:
    void gradeC()
    {

        cout << "this is class C " << endl;
    }
};

int main()
{

    C obj;

    obj.gradeB();
    obj.gradeC();

    return 0;
}