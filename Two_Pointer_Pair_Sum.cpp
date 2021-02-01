#include <iostream>
#include <algorithm>
using namespace std; // Two pointer Approch IMP!!! (Only for sorted array)
int main()
{

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    //we want pair of array that led to sum of 'num_sum'
    int num_sum;
    cin >> num_sum;

    // two pointer approch
    int i = 0; //point to 1st elemnt
    int j = sizeof(array) / sizeof(int) - 1; //point to last elemnt

    while (i < j)
    {
        int current_sum = array[i] + array[j];
        if (current_sum > num_sum)
        {
            j--;
        }
        else if (current_sum < num_sum)
        {
            i++;
        }
        else if (current_sum == num_sum)
        {
            cout << array[i] << " and " << array[j] << endl;
            i++;
            j--;
        }
    }

    return 0;
}
