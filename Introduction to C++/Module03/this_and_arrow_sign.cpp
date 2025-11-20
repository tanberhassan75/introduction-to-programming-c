
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
int main()
{
    Student mehedi(45, 2, 2.98);
    cout << "Roll : " << mehedi.roll << endl
         << "Class : " << mehedi.cls << endl
         << "CGPA : " << mehedi.cgpa;
    return 0;
}
