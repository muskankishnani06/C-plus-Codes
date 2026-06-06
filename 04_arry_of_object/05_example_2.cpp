#include <iostream>
using namespace std;

class car
{

private:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    static int totalCar_count;

public:
    void setCarDetail()
    {

        cout << "enter car id ";
        cin >> car_id;
        cin.ignore();

        cout << "enter car company name ";
        getline(cin, car_company_name);

        cout << "enter car car color ";
        getline(cin, car_color);

        cout << "enter car model name ";
        getline(cin, car_model);

        cout << "enter car release year ";
        cin >> car_release_year;
        cin.ignore();

        totalCar_count++;
    }

    void getCarDetail()
    {

        cout << "Car id " << car_id << endl;
        cout << "Car company name " << car_company_name << endl;
        cout << "Car color " << car_color << endl;
        cout << "Car model " << car_model << endl;
        cout << "Car release year " << car_release_year << endl;
    }

    static void totalCountCar()
    {

        cout << "Total Count is " << totalCar_count << endl;
    }
};

int car::totalCar_count = 0;

int main()
{

    cout << "Enter a size of an array ";
    int n;
    cin >> n;

    car arr[n];

    for (int i = 0; i < n; i++)
    {

        arr[i].setCarDetail();
    }

    for (int i = 0; i < n; i++)
    {

        arr[i].getCarDetail();
    }

    car :: totalCountCar();

    return 0;
}