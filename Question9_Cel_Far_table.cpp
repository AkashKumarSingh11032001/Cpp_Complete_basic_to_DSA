#include <iostream>
using namespace std;

int main()
{

    int max_F, min_F;
    cin >> min_F;
    cin >> max_F;

    int steps, C;
    cin >> steps;

    int F = min_F;

    while (F <= max_F)
    {
        C = (5 * (F - 32)) / 9;
        cout << F << " " << C << endl;

        F += steps;
    }

    return 0;
}