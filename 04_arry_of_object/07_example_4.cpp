#include <iostream>
using namespace std;

class customer
{

public:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    int cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

    static int customer_count;

    void setCustomerDetails()
    {

        cout << "Enter customer id ";
        cin >> cust_id;
        cin.ignore();

        cout << "Enter customer name ";
        getline(cin, cust_name);

        cout << "Enter customer age ";
        cin >> cust_age;
        cin.ignore();

        cout << "Enter customer city ";
        getline(cin, cust_city);

        cout << "Enter customer mobile number ";
        cin >> cust_mobile_number;
        cin.ignore();

        cout << "Enter customer simcard validity ";
        cin >> cust_simcard_validity;
        cin.ignore();

        cout << "Enter customer telecom brand name ";
        getline(cin, cust_telecom_brand_name);

        customer_count++;
    }

    void getCustomerDetails()
    {

        cout << "customer id " << cust_id << endl;
        cout << "customer name " << cust_name << endl;
        cout << "customer  age " << cust_age << endl;
        cout << "customer  city " << cust_city << endl;
        cout << "customer  mobile number " << cust_mobile_number << endl;
        cout << "customer  simcard validity " << cust_simcard_validity << endl;
        cout << "customer  telecom brand name " << cust_telecom_brand_name << endl;
    }

    static void getTotalCount()
    {

        cout << "Total customer count is " << customer_count << endl;
    }
};

int customer ::customer_count = 0;
int main()
{

    cout << "enter an array size ";
    int n;
    cin >> n;

    customer arr[n];

    for (int i = 0; i < n; i++)
    {

        arr[i].setCustomerDetails();
    }

    for (int i = 0; i < n; i++)
    {

        arr[i].getCustomerDetails();
    }

    customer::getTotalCount();

    return 0;
}