#include <iostream>

using namespace std;

class Bank
{

private:
    int bankBalance;

public:
    // parameterized constructor

    Bank(int amount)
    {

        bankBalance = amount;
    }

    void deposit(int amount)
    {
        if (amount <= 0)
        {

            cout << "please enter a valid amount " << endl;
        }
        else
        {

            bankBalance += amount;
            cout << amount << " has been credited in your account " << endl;
        }
    }

    void withraw(int amount)
    {

        if (amount > bankBalance)
        {

            cout << "insufficient balance " << endl;
        }
        else
        {
            bankBalance -= amount;

            cout << amount << " has been withraw from your acc " << endl;
        }
    }

    void checkBankBalance()
    {

        cout << "your account has " << bankBalance << endl;
    }
};

int main()
{

    Bank b(10000);

    b.checkBankBalance();

    b.deposit(10000);

    b.withraw(5000);

    b.checkBankBalance();

    return 0;
}