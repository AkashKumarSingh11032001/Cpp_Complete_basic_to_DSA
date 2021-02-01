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

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i; j <= n - 1; j++)
        {

            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        swap(array[i], array[min_index]);
    }
    //print
    for (int i = 0; i < n; i++)
    {
        cout << array[i]<<" ";
    }
}