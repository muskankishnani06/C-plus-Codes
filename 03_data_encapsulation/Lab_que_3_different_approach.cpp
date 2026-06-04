#include <iostream>

using namespace std;

class CarDetails
{

private:
    int car_id;
    string car_company_name;
    string car_model;
    string car_color;
    int car_price;
    string car_fuel_type;
    int car_release_year;

public:
    void setCustomerDetail()
    {

        cout << "enter Car id " << endl;
        cin >> car_id;
        cin.ignore();

        cout << "enter Car company name " << endl;
        cin >> car_company_name;
        getline(cin, car_company_name);

        cout << "enter Car model  " << endl;
        cin >> car_model;
        getline(cin, car_model);

        cout << "enter Car Color " << endl;
        cin >> car_color;
        getline(cin, car_color);

        cout << "enter Car Price " << endl;
        cin >> car_price;
        cin.ignore();

        cout << "enter Customer email " << endl;
        cin >> car_fuel_type;
        getline(cin, car_fuel_type);

        cout << "enter Car release year" << endl;
        cin >> car_release_year;
        cin.ignore();
    }

    void getCustomerDetail()
    {

         cout << "Id          : " << car_id << endl;
        cout << "Name        : " << car_company_name << endl;
        cout << "modelName   : " << car_model << endl;
        cout << "color       : " << car_color << endl;
        cout << "price       : " << car_price << endl;
        cout << "fuelType    : " << car_fuel_type << endl;
        cout << "releaseYear : " << car_release_year << endl;
    }
};

int main()
{

    CarDetails c[5];

    for (int i = 1; i <= 5; i++)
    {

        c[i].setCustomerDetail();
    }

    for (int i = 1; i <= 5; i++)
    {

        c[i].getCustomerDetail();
    }

    return 0;
}