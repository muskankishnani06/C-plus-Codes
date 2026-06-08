#include <iostream>
using namespace std;

class Bank
{

public:
    double AccountNumber;

    Bank()
    {

        cout << "Enter account number ";
        cin >> AccountNumber;
    };

    void DisplayAccNumber()
    {

        cout << "Account number is " << AccountNumber << endl;
    }
};
int main()
{
    Bank b1;

    b1.DisplayAccNumber();

    return 0;
}