#include <iostream>   //Working CodeBlock IDE
#include <algorithm>
using namespace std;

void StairCase(int a[][1000], int n, int element)
{
    int i = 0;
    int j = n - 1;
    int flag = 0;

    while ((i < n) && (j >= 0))
    {
        if (element > a[i][j])
        {
            a[i][j] = a[++i][j];
        }
        else if (element < a[i][j])
        {
            a[i][j] = a[i][--j];
        }
        else
        {
            flag = 1;
            break;
        }
    }
    cout << a[i][j] << " Found at " << i << j << endl;
}

int main()
{

    int n, elemnt_to_search, array[1000][1000];
    cin >> n;
    cin >> elemnt_to_search;

    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            cin >> array[a][b];
        }
        cout << endl;
    }
    StairCase(array, n, elemnt_to_search);
}