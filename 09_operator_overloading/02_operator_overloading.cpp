#include <iostream>

using namespace std;

class Num
{

public:

    int num;


//parameterized constructor

    Num(int n)
    {

        num = n; 
    }

    // for display details

    void display()
    {

        cout << "total " << num << endl;
    }
};

int main()
{

    // object or instance

    Num n1(30);

    Num n2(40);

    // this will not work and will give error because in class you can't do operation using operators for that we have to use operator overloading
    // cout << "total " << n1 + n2 << endl;

    return 0;
}