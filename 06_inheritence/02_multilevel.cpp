#include <iostream>
using namespace std;

class GrandFather
{

public:
    void grandFather()
    {

        cout << "this is Grand Father's property  " << endl;
    }
};
class Father : public GrandFather
{

public:
    void father()
    {

        cout << " this is Father's property " << endl;
    }
};

class Child : public Father
{

public:
    void child()
    {

        cout << " this is child property " << endl;
    }
};

int main()
{

    Child c;

    c.child();
    c.grandFather();
    c.father();

    return 0;
}