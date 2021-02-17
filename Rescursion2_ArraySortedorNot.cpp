#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{

    if (n == 0 or n == 1)
    {
        return true;
    }
    if (a[0] < a[1] and isSorted(a + 1, n - 1))
    {
        return true;
    }
    return false;
}
int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(int);
    cout << isSorted(array, n) << endl;

    return 0;
}