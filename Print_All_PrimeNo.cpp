#include <iostream>
using namespace std;

int Prime(int n)
{

    int i;

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is Not Prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << n << " Prime" << endl;
    }
}

int main()
{

    int range_start, range_stop;
    cin >> range_start;
    cin >> range_stop;

    for (int i = range_start; i <= range_stop; i++)
    {
        Prime(i);
    }
}
