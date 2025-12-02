#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "hello world";
    // for(string:: iterator it = s.begin(); it!=s.end(); it++)
    // {
    //     cout << *it ;
    // }
    string s;
    cin.ignore();
    getline(cin,s);
    cout << s;
    stringstream rr(s);
    string a;
    rr >> a;
    cout << a;
    rr >> a;
    cout << a;

    return 0;
}