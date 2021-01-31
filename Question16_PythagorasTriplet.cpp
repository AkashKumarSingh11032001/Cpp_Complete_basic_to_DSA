#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
int main()
{
    ll x;

    while (cin >> x)
    {
        if (x < 3)
        {
            cout<<"-1"<<endl;
            continue;
        }

        if (x & 1)
            cout<<(x * x - 1) / 2 <<" "<<(x * x + 1) / 2 <<endl;
        else
        {
            cout<<((x * x) / 4) - 1<<" "<<((x * x) / 4) + 1<<endl;

        }
    }
    return 0;
}