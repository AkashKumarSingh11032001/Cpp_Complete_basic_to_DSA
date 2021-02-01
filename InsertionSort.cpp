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
        //pointing i-th index
        int e = array[i];
        //place the current elemnt at 'right' pos, in sorting part
        int j = i - 1;
        while (j >= 0 and array[j] > e)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = e;
    }
    //print
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
