#include <iostream>
using namespace std;

int KadanAlgo(int a[], int N)
{
    int current_sum = 0;
    int max_sum = 0;
    for (int i = 0; i < N; i++)
    {
        current_sum += a[i];

        if (current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(current_sum, max_sum);
    }

    return max_sum; //kadann sum
}

int MaxCirculrSum(int a[], int N)
{

    int max_Kadann = KadanAlgo(a, N); // Case 1: get the maximum sum using standard kadane'

    // Case 2: Now find the maximum sum that includes corner elements.
    int Sum = 0, i;
    for (int i = 0; i < N; i++)
    {
        Sum += a[i];  //array sum
        a[i] = -a[i]; //invert
    }
    // max sum = array_sum - (-max subarray sum of inverted array)
    Sum = Sum - (-KadanAlgo(a, N));
    if (Sum > max_Kadann)
    {
        return Sum;
    }
    else
    {
        return max_Kadann;
    }
}


int main()
{

    int N;
    cin >> N;

    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    cout << "Circular Sum : " << MaxCirculrSum(array, N) << endl;

    return 0;
}