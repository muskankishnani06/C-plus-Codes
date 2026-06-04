#include <iostream>

using namespace std;

class CustomerDetail
{

private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    int cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    void setCustomerDetail()
    {

        cout << "enter Customer id " << endl;
        cin >> cust_id;
        cin.ignore();

        cout << "enter Customer name " << endl;
        cin >> cust_name;
        getline(cin, cust_name);

        cout << "enter Customer age " << endl;
        cin >> cust_age;
        cin.ignore();

        cout << "enter Customer course " << endl;
        cin >> cust_city;
        getline(cin, cust_city);

        cout << "enter Customer city " << endl;
        cin >> cust_mobile_number;
        cin.ignore();

        cout << "enter Customer email " << endl;
        cin >> cust_simcard_validity;
        cin.ignore();

        cout << "enter Customer college " << endl;
        cin >> cust_telecom_brand_name;
        getline(cin, cust_telecom_brand_name);
    }

    void getCustomerDetail()
    {

        cout << "Id                 : " << cust_id << endl;
        cout << "Name               : " << cust_name << endl;
        cout << "Age                : " << cust_age << endl;
        cout << "City               : " << cust_city << endl;
        cout << "Mobile Number      : " << cust_mobile_number << endl;
        cout << "Sim card Validity  : " << cust_simcard_validity << endl;
        cout << "Telecom brand name : " << cust_telecom_brand_name << endl;
    }
};

int main()
{

    CustomerDetail s[5];

    for (int i = 1; i <= 5; i++)
    {

        s[i].setCustomerDetail();
    }

    for (int i = 1; i <= 5; i++)
    {

        s[i].getCustomerDetail();
    }

    return 0;
}