#include <iostream>

using namespace std;

class CarDetails
{

    int car_id;
    string car_company_name;
    string car_model;
    string car_color;
    int car_price;
    string car_fuel_type;
    int car_release_year;

public:
    void setCarDetails(int id, string companyName, string modelName, string color, int price, string fuelType, int releaseYear)
    {

        car_id = id;
        car_company_name = companyName;
        car_model = modelName;
        car_color = color;
        car_price = price;
        car_fuel_type = fuelType;
        car_release_year = releaseYear;
    }

    void getCarDetails()
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

    cout << "---------car-1-details---------" << endl;
    CarDetails c1;

    c1.setCarDetails(1, "toyota", "Fortuner", "White", 4500000, "Diesel", 2024);
    c1.getCarDetails();

    cout << "---------car-2-details---------" << endl;
    CarDetails c2;

    c2.setCarDetails(2, "Hyundai", "Creta", "Black", 1800000, "Petrol", 2023);
    c2.getCarDetails();

    cout << "---------car-3-details---------" << endl;
    CarDetails c3;

    c3.setCarDetails(3, "Tata", "Nexon", "Red", 1400000, "CNG", 2025);
    c3.getCarDetails();

    cout << "---------car-4-details---------" << endl;
    CarDetails c4;

    c4.setCarDetails(4, "Maruti Suzuki", "Brezza", "Blue", 1250000, "Diesel", 2024);
    c4.getCarDetails();

    cout << "---------car-5-details---------" << endl;
    CarDetails c5;

    c5.setCarDetails(5, "Mahindra", "Scorpio-N", "Silver", 2200000, "Diesel", 2025);
    c5.getCarDetails();



    return 0;
}