#include <iostream>
using namespace std;

int isPrime(int n)
{

    int i;

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    if (i == n)
    {

        return 1;
    }
}

int countPrimes(int strt, int end)
{
    int count = 0;
    for (int i = strt; i <= end; i++)
    {
        if (isPrime(i) == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int range_start, range_stop;
    cin >> range_start >> range_stop;

    cout << countPrimes(range_start, range_stop);
}
