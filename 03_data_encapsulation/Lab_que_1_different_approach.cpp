#include <iostream>

using namespace std;

class StudentDetail
{

private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    void setStudentDetails()
    {

        cout << "enter student id " << endl;
        cin >> stu_id;
        cin.ignore();

        cout << "enter student name " << endl;
        cin >> stu_name;
        getline(cin, stu_name);

        cout << "enter student age " << endl;
        cin >> stu_age;
        cin.ignore();

        cout << "enter student course " << endl;
        cin >> stu_course;
        getline(cin, stu_course);

        cout << "enter student city " << endl;
        cin >> stu_city;
        getline(cin, stu_city);

        cout << "enter student email " << endl;
        cin >> stu_email;
        getline(cin, stu_email);

        cout << "enter student college " << endl;
        cin >> stu_college;
        getline(cin, stu_college);
    }

    void getStudentDetails()
    {

        cout << "Id      : " << stu_id << endl;
        cout << "Name    : " << stu_name << endl;
        cout << "age     : " << stu_age << endl;
        cout << "Course  : " << stu_course << endl;
        cout << "City    : " << stu_city << endl;
        cout << "Email   : " << stu_email << endl;
        cout << "College : " << stu_college << endl;
    }
};

int main()
{

    StudentDetail s[5];

    for (int i = 1; i <= 5; i++)
    {

        s[i].setStudentDetails();
    }

    for (int i = 1; i <= 5; i++)
    {

        s[i].getStudentDetails();
    }

    return 0;
}