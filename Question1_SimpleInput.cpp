#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int x;

    while (x = true)
    {
        cin >> n;
        sum = sum + n;
        if (sum >= 0)
        {
            cout <<"Output : "<< n << endl;
        }
        else
        {
            x = false;
            break;
        }
    }
}