#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
        {
            cout << s.front();
            cout << s.size() - 2;
            cout << s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}