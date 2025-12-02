#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int english;
    int math; 
    Student(string name, int roll,int english,int math)
    {
        this->name = name;
        this->roll = roll;
        this->english = english;
        this->math = math;
    }
    void Hello()
    {
        cout << "Total Marks Of the " << name << english+math <<endl;
    }
};
int main()
{
    Student Mehedi("Mehedi ",24,55,70);
    Student Redoan("Redoan ",1,91,95);
    Mehedi.Hello();
    Redoan.Hello();
    
    
    return 0;
}