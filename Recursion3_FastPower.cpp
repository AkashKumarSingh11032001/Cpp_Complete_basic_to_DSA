#include <iostream>
using namespace std;

int Pow(int a, int n) //n 
{

    if (n == 0)
    {
        return 1;
    }

    return a * Pow(a, n - 1);
}
int fastPow(int a, int n)// logn
{

    if (n == 0)
    {
        return 1;
    }
    int small_ans = fastPow(a, n / 2);
    small_ans *= small_ans;

    if (n & 1)// checking odd or not
    {
        return small_ans * a;
    }
    return small_ans;
}
int main()
{

    int a, b;
    cin >> a >> b;

    cout << fastPow(a, b) << endl;
    cout << Pow(a, b) << endl;
}