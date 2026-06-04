#include <iostream>

using namespace std;

class Product
{

public:
    int product_id;
    string product_name;
    string product_category;
    int product_price;
    int product_stock;

    void setProductDetails(int id, string name, string category, int price, int stock)
    {
        product_id = id;
        product_name = name;
        product_category = category;
        product_price = price;
        product_stock = stock;
    }

    void getProductDetails()
    {

        cout << "product id " << product_id << endl;
        cout << "product name " << product_name << endl;
        cout << "product name " << product_category << endl;
        cout << "product price " << product_price << endl;
        cout << "product stock " << product_stock << endl;
    }
};

int main()
{

    cout << "----------Product 1------------" << endl;

    Product p1;

    p1.setProductDetails(201, "Laptop", "Electronics", 55000, 15);

    p1.getProductDetails();

    cout << "----------product 2------------" << endl;

    Product p2;

    p2.setProductDetails(202, "Mobile", "Electronics", 25000, 20);

    p2.getProductDetails();

    cout << "----------Product 3------------" << endl;

    Product p3;

    p3.setProductDetails(203, "Chair", "Furniture", 3500, 30);

    p3.getProductDetails();

    cout << "----------Product 4------------" << endl;

    Product p4;

    p4.setProductDetails(201, "Headphones", "Accessories ", 2000, 50);

    p4.getProductDetails();

    return 0;
}