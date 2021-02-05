#include <iostream>
using namespace std;

long long int factorial(unsigned long long int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
int main()
{

    unsigned long long int N;
    cin >> N;

    cout << factorial(N);
}