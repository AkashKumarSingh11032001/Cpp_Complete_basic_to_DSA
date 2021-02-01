#include <iostream>
#include <algorithm>
using namespace std;   // N^2 complexcity //using cumilative sum 

int main()
{

    int n;
    cin >> n;
    

    int max_sum = 0;
    int current_sum = 0;

    //for getting particular subarray value.
    int left = -1;
    int right = -1;

    int array[n];
    int cum_sum[1000] = {0};
    
    //taking input for 0th 
    cin>>array[0];
    cum_sum[0] = array[0];
    //taking input for rest of the array
    for (int i = 1; i < n; i++)
    {
        cin >> array[i];
        cum_sum[i] = cum_sum[i-1] + array[i];
    }

    for (int i = 0; i < n; i++) //0 to n-1 transveres
    {
        for (int j = i; j < n; j++) // 0 to n-1; then 1 to n-1; then 2 to n-1; so on  
        {
            current_sum = 0;
            current_sum = cum_sum[j] - cum_sum[i-1];
            


            //cout <<current_sum<< endl;
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                left = i;
                right = j;
            }
        }
    }

    cout << "MAximum Sum :" << max_sum << endl;

    for (int k = left; k <= right; k++)
    {
        cout << array[k] << " ";
    }

    return 0;
}