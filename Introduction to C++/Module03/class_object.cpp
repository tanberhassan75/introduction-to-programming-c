#include<bits/stdc++.h>
using namespace std;
class student // Class
{
    public:
    char name[100];
    char dept[100];
    int roll;
    double gpa;
};
int main()
{
    student a, b; // Object
    cin.getline(a.name,100); // 1st for input with space
    cin.getline(a.dept,100);
    cin >> a.roll >> a.gpa;
    cin.ignore();

    cin.getline(b.name,100); // 2nd for input with space
    cin.getline(b.dept,100);
    cin >> b.roll >> b.gpa;
    // char temp[100] = "Mehedi";
    // strcpy(a.name,temp);
    // char temp2[100] = "Computer Science & Technology";
    // strcpy(a.dept,temp2); //for copy
    // a.roll = 241009;
    // a.gpa = 3.89;
    cout << "Name : "<< a.name << endl << "Department : " << a.dept << endl; 
    cout <<"Roll : "<< a.roll << endl << "GPA : "<< a.gpa << endl << endl;

    cout << fixed << setprecision(2); // for last .00 number
    cout << "Name : "<< b.name << endl << "Department : " << b.dept << endl; 
    cout <<"Roll : "<< b.roll << endl << "GPA : "<< b.gpa ;
    return 0;
}