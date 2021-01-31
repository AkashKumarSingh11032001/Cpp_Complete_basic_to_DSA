#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    int series;
    for (int i = 1; i <= n1; i++)
    {
        series = 3 * i + 2;
        if (series % n2 == 0)
        {
            n1 += 1; //so that to overcome skied value
            continue;
        }
        else
        {
            cout << series << endl;
        }
    }

    return 0;
}