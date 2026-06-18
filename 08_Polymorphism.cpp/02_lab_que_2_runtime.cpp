#include <iostream>

using namespace std;

class Cricket
{

public:
    virtual void totalOver()
    {

        cout << " initial overs are zero " << endl;
    }
};

class T20Match : public Cricket
{

public:
    void totalOver()
    {

        cout << "T20 match has 20 over " << endl;
    }
};
class TestMatch : public Cricket
{

public:
    void totalOver()
    {

        cout << "Test match has 80 over " << endl;
    }
};
int main()
{
    Cricket *c;

    T20Match t20;

    c = &t20;

    c->totalOver();

    TestMatch tm;

    c = &tm;

    c->totalOver();

    return 0;
}