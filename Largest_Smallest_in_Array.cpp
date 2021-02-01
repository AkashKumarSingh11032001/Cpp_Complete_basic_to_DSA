#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int max = array[1];
    int min = array[1];

    for (int i = 0; i < n; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << max << endl;
    cout << min << endl;

    return 0;
}