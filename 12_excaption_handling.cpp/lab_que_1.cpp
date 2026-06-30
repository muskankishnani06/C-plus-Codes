#include <iostream>

using namespace std;

int main()
{

    float num1;
    float num2;

    cout << " enter your first number ";
    cin >> num1;

    cout << " enter your second number ";
    cin >> num2;

    try
    {

        if (num2 == 0)
        {

            throw "number can't be divided by 0";
        }

        float division = num1 / num2;

        cout << " division is " << division << endl;
    }

    catch (char const *msg)
    {

        cout << msg << endl;
    }

    return 0;
}