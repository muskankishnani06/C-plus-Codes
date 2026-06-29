#include <iostream>

using namespace std;

class Calculate
{

public:
    virtual void calculate() = 0;
};

class Circle : public Calculate
{

private:
    float area_of_circle;

public:
    Circle(int area)
    {

        area_of_circle = area;
    }

    void calculate() override
    {

        cout << " the area of circle is " << 3.14 * area_of_circle * area_of_circle << endl;
    }
};

class Triangle : public Calculate
{

private:
    int base, hight;

public:
    Triangle(int b, int h)
    {

        base = b;
        hight = h;
    }

    void calculate() override
    {

        cout << " the area of triangle is " << 0.5 * base * hight << endl;
    }
};

class Rectangle : public Calculate
{

private:
    int length, base;

public:
    Rectangle(int l, int b)
    {

        length = l;
        base = b;
    }

    void calculate() override
    {

        cout << " the area of rectangle is " << length * base << endl;
    }
};

int main()
{

    Calculate *cl;

    Circle c(20);
    Triangle t(20, 30);
    Rectangle r(20, 30);

    // area of circle

    cl = &c;
    cl->calculate();

    // area of triangle

    cl = &t;
    cl->calculate();

    // area of Rectangle

    cl = &r;
    cl->calculate();

    return 0;
}