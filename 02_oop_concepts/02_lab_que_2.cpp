#include <iostream>
using namespace std;

class Car
{

public:
    int car_id;
    string car_company_name;
    string car_color;
    string card_model;
    int car_release_year;

    void setCarDetails(int id, string companyName, string carColor, string carModel, int carReleaseYear)
    {

        car_id = id;
        car_company_name = companyName;
        car_color = carColor;
        card_model = carModel;
        car_release_year = carReleaseYear;
    }

    void getCarDetails()
    {

        cout << "Car id " << car_id << endl;
        cout << "Car company name " << car_company_name << endl;
        cout << "Car color " << car_color << endl;
        cout << "Car car model " << card_model << endl;
        cout << "Car car release year " << car_release_year << endl;
    }
};

main()
{

    cout<< "---------First car-------------" << endl;

    Car c1;

    c1.setCarDetails(101, "Toyota", "White", "Fortuner", 2024);

    c1.getCarDetails();

    cout<< "---------second car-------------" << endl;

    Car c2;

    c2.setCarDetails(102, "Honda", "Black", "City", 2023);

    c2.getCarDetails();

    cout<< "---------Third car-------------" << endl;

    Car c3;

    c3.setCarDetails(103, "Hyundai", "white", "Creta", 2024);

    c3.getCarDetails();

    cout<< "---------fourth car-------------" << endl;

    Car c4;

    c4.setCarDetails(104, "Tata", "Blue", "Nexon", 2025);

    c4.getCarDetails();

    return 0;
}
