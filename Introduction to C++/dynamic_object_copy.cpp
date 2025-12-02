#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    string country;
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
     Cricketer* Shakib = new Cricketer("Bangladesh ",75);
     Cricketer* Tamim = new Cricketer("Bangladesh", 28);
     *Tamim = *Shakib;
     delete Shakib;
     cout << Tamim->country << Tamim->jersey<<endl;
    
    return 0;
}