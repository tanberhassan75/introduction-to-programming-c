
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll, int cls, double cgpa)
    {
        (*this).roll = roll; // this ta pointer se roll er address acecess korteche
        (*this).cls = cls;
        (*this).cgpa = cgpa;
    }
};
Student* fun()
{
    Student* mehedi = new Student(10, 5, 3.89);
    return mehedi;
}
int main()
{
    Student* p = fun();
    cout << "Roll : " << p->roll << endl<< "Class : " << p->cls << endl<< "CGPA : " << p->cgpa;
    return 0;
}
