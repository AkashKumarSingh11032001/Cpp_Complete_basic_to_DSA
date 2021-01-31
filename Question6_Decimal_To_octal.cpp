#include <iostream>
using namespace std; //Decimal To Octal Conversion !!!

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int r, p = 1;
    while (n > 0)
    {
        r = n % 8;
        n = n / 8;
        ans = ans + r * p;
        p = p * 10;
    }
    cout << ans << endl;
}
