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

    int start = 0;
    int end = n - 1;

    int element_to_search;
    cin >> element_to_search;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (element_to_search == array[mid])
        {
            cout << "Elemnt Found at " << mid+1 << endl;
            break;
        }
        else if (element_to_search > array[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}