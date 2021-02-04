#include <iostream>
#include <algorithm>
using namespace std; //Two Pointer Approch

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
    //two pinter approch
    int i = 0;
    int j = sizeof(array) / sizeof(int) - 1;
    while (i < j)
    {
        int sum = array[i] + array[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            cout << array[i] << " and " << array[j] << endl;
            i++;
            j--;
        }
    }
}