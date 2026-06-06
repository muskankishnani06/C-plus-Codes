#include <iostream>
using namespace std;
class Product
{

public:
    string name;
    static string productCompanyName;

    void setCarDetails(string name)
    {

        this->name = name;
    }

    void getCarDetails()
    {

        cout << "Product name is " << name << endl;
    }

    static void getcompanyname()
    {

        cout << "company name is " << productCompanyName << endl;
    }
};

string Product ::productCompanyName = "samsung";
int main()
{

    cout << "------------ product-1 --------------" << endl;

    Product p1;

    p1.setCarDetails("mobile");
    p1.getCarDetails();
    p1.getcompanyname();

    cout << "------------ product-2 --------------" << endl;

    Product p2;

    p2.setCarDetails("Tv");
    p2.getCarDetails();
    p2.getcompanyname();

    return 0;
}