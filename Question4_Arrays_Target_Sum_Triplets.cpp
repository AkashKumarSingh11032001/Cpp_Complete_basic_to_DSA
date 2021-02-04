#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int target;
    cin >> target;

    sort(array, array + N); //sort

    for (int i = 0; i < N; i++)
    {
        int j = i + 1;
        int k = sizeof(array) / sizeof(int) - 1;
        while (j < k)
        {

            int sum = array[i] + array[j] + array[k];
            if (sum > target)
            {
                k--;
            }
            else if (sum < target)
            {
                j++;
            }
            else
            {
                cout << array[i] << " and " << array[j] << " and " << array[k] << endl;
                j++;
                k--;
            }
        }
    }
    return 0;
}