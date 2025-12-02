#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream rr(s);
    string tanber;
    int wor=0;
    while(rr >> tanber)
    {
        cout << tanber << endl;
        wor++;
    }
    cout << "there are "<<wor <<" word";
    return 0;
}