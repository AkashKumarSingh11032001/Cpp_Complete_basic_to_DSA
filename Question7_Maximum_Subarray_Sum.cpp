#include <iostream>
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

    //kadan Algo
    int current_sum = 0;
    int max_sum = 0;
    for (int i = 0; i < N; i++)
    {
        current_sum += array[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(current_sum, max_sum);
    }
    cout << "Max Sum : " << max_sum << endl;
}