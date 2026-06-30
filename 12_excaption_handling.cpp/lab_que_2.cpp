#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << " enter your age ";
    cin >> age;

    try
    {

        if (age < 18)
        {

            throw "A person cannot be able to vote if his/her age is less than 18";
        }
        cout << "your age is " << age << " which valid age for voting " << endl;
    }

    catch (char const *msg)
    {

        cout << msg << endl;
    }

    return 0;
}