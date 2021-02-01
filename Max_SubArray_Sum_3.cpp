// n complexcity
// Kadans Algorithm !!!!
// Best one

#include <iostream>
#include <algorithm>
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

    //Kadans Algo
    int current_sum = 0;
    int max_sum = 0;

    for (int i = 0; i < n; i++)
    {
        current_sum += array[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(current_sum, max_sum);
    }

    cout << "MAximum Sum : " << max_sum << endl;
}
