#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double cgpa;
    Student (int r, int c, double g)
    {
        roll = r;
        cls = c;
        cgpa = g;
    }
};
int main()
{
    Student mehedi (45,2,2.98);
    cout << "Roll : " << mehedi.roll<<endl<< "Class : "<< mehedi.cls << endl <<"CGPA : "<<mehedi.cgpa;
    return 0;
}