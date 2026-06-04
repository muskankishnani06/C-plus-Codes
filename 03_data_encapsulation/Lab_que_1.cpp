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

    void setStudentDetails(int id, string name, int age, string course, string city, string email, string college)
    {

        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_city = city;
        stu_email = email;
        stu_college = college;
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
    cout << "--------Student-1---------" << endl;

    StudentDetail s1;

    s1.setStudentDetails(10, "alice", 20, "Bca", "bvn", "alice@gmail.com", "ssccm");
    s1.getStudentDetails();

    cout << "--------Student-1---------" << endl;

    StudentDetail s2;

    s2.setStudentDetails(10, "alice", 20, "Bca", "bvn", "alice@gmail.com", "ssccm");
    s2.getStudentDetails();

    cout << "--------Student-3---------" << endl;

    StudentDetail s3;

    s3.setStudentDetails(10, "alice", 20, "Bca", "bvn", "alice@gmail.com", "ssccm");
    s3.getStudentDetails();

    cout << "--------Student-4---------" << endl;

    StudentDetail s4;

    s4.setStudentDetails(10, "alice", 20, "Bca", "bvn", "alice@gmail.com", "ssccm");
    s4.getStudentDetails();

    cout << "--------Student-5---------" << endl;

    StudentDetail s5;

    s5.setStudentDetails(10, "alice", 20, "Bca", "bvn", "alice@gmail.com", "ssccm");
    s5.getStudentDetails();

    return 0;
}