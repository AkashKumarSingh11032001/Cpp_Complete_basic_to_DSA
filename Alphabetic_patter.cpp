#include <iostream>
using namespace std;

void Patter(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int cnt_alpha = n - i + 1;
        char alphabet = 'A';
        for (int j = 1; j <= cnt_alpha; j++)
        {
            cout << alphabet;
            alphabet = alphabet + 1;
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    Patter(n);
}