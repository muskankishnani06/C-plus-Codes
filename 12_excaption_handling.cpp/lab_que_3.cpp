#include <iostream>
using namespace std;

int main()
{

    string password;

    bool hasUpper = false;

    cout << "enter a password ";

    cin >> password;

    try
    {

        for (int i = 0; i < password.length(); i++)
        {

            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                hasUpper = true;
                break;
            }
        }

        if (!hasUpper)
        {

            throw " a password cannot be validated if it doesn't contain an uppercase letter";
        }

        cout << " login successfully ";
    }

    catch (char const *msg)
    {

        cout << msg << endl;
    }

    return 0;
}