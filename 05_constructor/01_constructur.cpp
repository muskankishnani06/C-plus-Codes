#include <iostream>
using namespace std;

class Phone
{

public:
    string battery;
    string processor;

    Phone()
    {

        battery = "5000mah";
        processor = "snapdragon";

        cout << " constructor is called " << endl;
    };

    void displayPhoneDetail()
    {
        cout << "my phone has " << battery << " battery " << endl;
        cout << "my phone has " << processor << " processor " << endl;
    }
};

int main()
{
    Phone p1;

    // cout << p1.battery;
    p1.displayPhoneDetail();

    return 0;
}