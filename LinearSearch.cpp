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

    int element_to_search;
    cin >> element_to_search;

    int i;
    for (i = 0; i < n; i++)
    {
        if (array[i] == element_to_search)
        {
            cout << element_to_search << " element present" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Elemrnt not found";
    }

    return 0;
}