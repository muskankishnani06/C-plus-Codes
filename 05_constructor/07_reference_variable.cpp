#include <iostream>
using namespace std;

int main()
{

    int a = 24;
    int b = a;

    cout << "print value of a " << a << endl;
    cout << "print value of b " << b << endl;

    b = 50;

    cout << "print after changing value of a " << a << endl;
    cout << "print after changing value of b " << b << endl;

    int c = 48;
    int &d = c;

    cout << "print value of c " << c << endl;
    cout << "print value of d " << d << endl;

    d = 100;

    cout << "print after changing value of c " << c << endl;
    cout << "print after changing value of d " << d << endl;

    return 0;
}