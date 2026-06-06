#include <iostream>
using namespace std;

class Student
{

public:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

    static int student_count;

    void setStudentDetails()
    {

        cout << "Enter Student id ";
        cin >> stu_id;
        cin.ignore();

        cout << "Enter student name ";
        getline(cin, stu_name);

        cout << "Enter Student age ";
        cin >> stu_age;
        cin.ignore();

        cout << "Enter student course ";
        getline(cin, stu_course);

        cout << "Enter student city ";
        getline(cin, stu_city);

        cout << "Enter student email ";
        getline(cin, stu_email);

        cout << "Enter student college ";
        getline(cin, stu_college);

        student_count++;
    }

    void getStudentDetails()
    {

        cout << "student id " << stu_id << endl;
        cout << "student name " << stu_name << endl;
        cout << "student age " << stu_age << endl;
        cout << "student course " << stu_course << endl;
        cout << "student city " << stu_city << endl;
        cout << "student email " << stu_email << endl;
        cout << "student college " << stu_college << endl;
    }

    static void getTotalCount()
    {

        cout << "Total student is " << student_count << endl;
    }
};

int Student ::student_count = 0;
int main()
{

    cout << "enter an array size ";
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {

        arr[i].setStudentDetails();
    }

    for (int i = 0; i < n; i++)
    {

        arr[i].getStudentDetails();
    }

    Student::getTotalCount();

    return 0;
}