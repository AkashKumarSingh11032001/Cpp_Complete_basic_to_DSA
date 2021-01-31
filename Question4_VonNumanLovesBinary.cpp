#include <iostream>
using namespace std;

int main()
{

    int testcase;
    cin >> testcase;

    int n;

    while (testcase > 0)
    {
        cin >> n;
        int ans = 0, p = 1, last_dig;
        while (n > 0)
        {
            last_dig = n % 10;
            ans = ans + p * last_dig;
            p *= 2;
            n /= 10;
        }
        cout << ans << endl;
    }
}