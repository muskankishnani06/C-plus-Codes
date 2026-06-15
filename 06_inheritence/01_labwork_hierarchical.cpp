#include <iostream>
using namespace std;

class RBI
{

public:
    float rate = 6.5;

    void getRoi()
    {

        cout << "current interest rate is " << rate << endl;
    }
};

class SBI : public RBI
{

public:
    SBI()
    {

        rate = 7.1;
    }
};

class BOB : public RBI
{

public:
    BOB()
    {

        rate = 8.1;
    }
};
class ICICI : public RBI
{

public:
    ICICI()
    {

        rate = 9.1;
    }
};

int main()
{
    RBI R;

    cout << "Rbi interest rate " << endl;

    R.getRoi();

    SBI S;

    cout << "sbi interest rate " << endl;

    S.getRoi();

    BOB B;

    cout << "Bob interest rate " << endl;

    B.getRoi();

     ICICI I;

    cout << "Icici interest rate " << endl;

    I.getRoi();

    return 0;
}