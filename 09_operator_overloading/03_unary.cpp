#include <iostream>

using namespace std;

class Num
{

public:
    int num;

    // parameterized constructor

    Num(int n)
    {

        num = n;
    }

    // display details

    void display()
    {

        cout << "total is " << num << endl;
    }

    // syntax of unary operator overloading

    // returntype operator operation{

    // }

    void operator++()
    {

        ++num;
    }
};

int main()
{

    Num n1(23);

    cout << " before " << endl;

    n1.display();

    cout << " after " << endl;

    ++n1;

    n1.display();

    return 0;
}