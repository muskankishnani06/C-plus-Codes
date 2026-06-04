#include <iostream>

using namespace std;

class Book
{

    public:
    int book_id;
    string book_name;
    string author_name;
    int book_price;
    int publish_year;

    void setBookDetails(int id, string name, string author, int price, int publishYear)
    {
        book_id = id;
        book_name = name;
        author_name = author;
        book_price = price;
        publish_year = publishYear;
    }

    void getBookDetails()
    {

        cout << "Book id " << book_id << endl;
        cout << "Book name " << book_name << endl;
        cout << "Author name " << author_name << endl;
        cout << "Book price " << book_price << endl;
        cout << "Book year " << publish_year << endl;
    }
};

int main()
{

    cout << "----------book 1------------" << endl;

    Book b1;

    b1.setBookDetails(201, "C Programming", "Dennis Ritchie", 450, 2020);

    b1.getBookDetails();

    cout << "----------book 2------------" << endl;
    
    Book b2;

    b2.setBookDetails(202, "Let Us C", "Yashavant Kanetkar", 350, 2021);

    b2.getBookDetails();

    cout << "----------book 3------------" << endl;
    
    Book b3;

    b3.setBookDetails(203, "Python Basics", "Eric Matthes", 550, 2022);

    b3.getBookDetails();

    cout << "----------book 4------------" << endl;
    
    Book b4;

    b4.setBookDetails(201, "Java Complete Reference", "Herbert Schildt ", 700, 2023);

    b4.getBookDetails();


    return 0;
}