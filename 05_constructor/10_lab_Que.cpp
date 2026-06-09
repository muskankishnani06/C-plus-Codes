#include <iostream>
using namespace std;

class Student
{

private:
    string student_name;
    int student_rollNo;
    float GPA;

public:
    Student(string name, int rollNo, float gpa)
    {
        student_name = name;
        student_rollNo = rollNo;
        GPA = gpa;
    }

    void display() const
    {
        cout << "Roll No : " << student_rollNo << endl;
        cout << "Name    : " << student_name << endl;
        cout << "GPA     : " << GPA << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{

    

    return 0;
}