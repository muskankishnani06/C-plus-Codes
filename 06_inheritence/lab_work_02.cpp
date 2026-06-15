#include <iostream>
using namespace std;
class P
{

public:
    float celsius;
};
class Q : public P
{

public:
    float fahrenheit;

    void toFahrenheit()
    {

        cout << " enter temperature in celsius " << endl;
        cin >> celsius;

        fahrenheit = ((celsius * 9 / 5) + 32);

        cout << "temperature in fahrenheit " << fahrenheit << endl;
    }
};

class R : public Q
{

public:
    int kelvin;
    void toKelvin()
    {

        kelvin = (((fahrenheit - 32) * 5 / 9) + 273.15);

        cout << "temperature in kelvin " << kelvin << endl;
    }
};
int main()
{
    R obj;

    obj.toFahrenheit();
    obj.toKelvin();

    return 0;
}