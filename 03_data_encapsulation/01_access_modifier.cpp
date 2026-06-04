#include <iostream>

using namespace std;

class Bank
{

private:
    int bankBalance = 10000;

public:
    int accountNumber = 1234567989;

    void depositMoney(int money)
    {

        bankBalance += money;
    }

    void checkBalance()
    {

        cout << bankBalance << endl;
    }
};

int main()
{

    Bank b1;

    cout << b1.accountNumber << endl;

    b1.depositMoney(5000);

    b1.checkBalance();

    return 0;
}