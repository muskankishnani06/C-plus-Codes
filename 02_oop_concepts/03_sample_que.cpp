#include <iostream>
using namespace std;

class student
{

public:
    int student_id;
    string student_name;
    string student_course;
    string student_city;
    int student_age;

    void setStudentDetails(int id, string name, string course, string city, int age)
    {

        student_id = id;
        student_name = name;
        student_course = course;
        student_city = city;
        student_age = age;
    }

    void getStudentDetails()
    {

        cout << "student id " << student_id << endl;
        cout << "student name " << student_name << endl;
        cout << "student course " << student_course << endl;
        cout << "student city " << student_city << endl;
        cout << "student age " << student_age << endl;
    }
};

int main()
{

    cout << "----------student-1-----------" << endl;
    student s1;

    s1.setStudentDetails(25, "rahul", "BCA", "vadodra", 20);

    s1.getStudentDetails();

    cout << "----------student-2-----------" << endl;

    student s2;

    s2.setStudentDetails(26, "priya", "BSc IT", "Ahmedabad", 21);

    s2.getStudentDetails();

    cout << "----------student-3-----------" << endl;

    student s3;

    s3.setStudentDetails(27, "Priya", "BCom", "Surat", 19);

    s3.getStudentDetails();

    cout << "----------student-4-----------" << endl;

    student s4;

    s4.setStudentDetails(28, "Aman", "BBA", "Rajkot", 20);

    s4.getStudentDetails();

    cout << "----------student-5-----------" << endl;

    student s5;

    s5.setStudentDetails(25, "sonali", "BCA", "gandhinagar", 22);

    s5.getStudentDetails();

    return 0;
}