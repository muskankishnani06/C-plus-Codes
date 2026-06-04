#include <iostream>

using namespace std;

class StudentDetail
{

private:
    int marks;

public:
    string name = "alice";

    void setStudentDetails(int marks)
    {

        this->marks = marks;
    }

    void getStudentDetails()
    {

        cout << "Name    : " << name << endl;
        
    }
};

int main()
{
    cout << "--------Student-1---------" << endl;

    StudentDetail s1;

    // cout << s1.marks << endl;

    s1.setStudentDetails(99);

    s1.getStudentDetails();

    

    return 0;
}