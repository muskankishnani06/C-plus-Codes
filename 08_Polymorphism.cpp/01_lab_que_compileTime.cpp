#include <iostream>

using namespace std;

class Arithmetic
{

public:
    void calculate(int a, int b)
    {

        cout << "Division is " << a / b << endl;
    };

    void calculate(int a, int b, int c)
    {

        cout << "substraction is " << a - b - c << endl;
    };

    void calculate(int a, int b, int c, int d)
    {

        cout << "multiplication is " << a * b * c * d << endl;
    };

    void calculate(int a, int b, int c, int d, int e)
    {

        cout << "Addition is " << a + b + c + d + e << endl;
    };
};

int main()
{

    Arithmetic a;

    a.calculate(15, 30);
    a.calculate(40, 30, 20);
    a.calculate(2, 3, 4, 5);
    a.calculate(1, 2, 3, 4, 5);

    return 0;
}