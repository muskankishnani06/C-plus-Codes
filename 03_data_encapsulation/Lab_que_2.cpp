#include <iostream>

using namespace std;

class CustomerDetails
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
    void setCustomerDetails(int id, string name, int age, string city, int mobileNumber, int simCardValidity, string telecomBrandName)
    {

        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_city = city;
        cust_mobile_number = mobileNumber;
        cust_simcard_validity = simCardValidity;
        cust_telecom_brand_name = telecomBrandName;
    }

    void getCustomerDetails()
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

    cout << "--------Customer-1-------------" << endl;

    CustomerDetails c1;

    c1.setCustomerDetails(1, "rakesh", 25, "bvn", 1234567891, 2, "jio");
    c1.getCustomerDetails();

    cout << "--------Customer-2-------------" << endl;

    CustomerDetails c2;

    c2.setCustomerDetails(1, "rakesh", 25, "bvn", 1234567891, 2, "jio");
    c2.getCustomerDetails();

    cout << "--------Customer-3-------------" << endl;

    CustomerDetails c3;

    c3.setCustomerDetails(1, "rakesh", 25, "bvn", 1234567891, 2, "jio");
    c3.getCustomerDetails();

    cout << "--------Customer-4-------------" << endl;

    CustomerDetails c4;

    c4.setCustomerDetails(1, "rakesh", 25, "bvn", 1234567891, 2, "jio");
    c4.getCustomerDetails();

    cout << "--------Customer-05-------------" << endl;

    CustomerDetails c5;

    c5.setCustomerDetails(1, "rakesh", 25, "bvn", 1234567891, 2, "jio");
    c5.getCustomerDetails();

    return 0;
}