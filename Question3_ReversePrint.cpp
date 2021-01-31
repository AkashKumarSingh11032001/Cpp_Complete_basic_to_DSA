#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;

    while (n != 0)
    {
        int last_dig = n % 10;

        res = res * 10 + last_dig;

        n = n / 10;
    }
    cout << res << endl;

    return 0;
}