#include <iostream>
#include <algorithm>
using namespace std;

// without STl
void Rotate(int a[][1000], int n)
{
    //reverse
    for (int row = 0; row < n; row++)
    {
        int start_col = 0;
        int end_col = n - 1;
        while (start_col < end_col)
        {
            swap(a[row][start_col], a[row][end_col]);
            start_col++;
            end_col--;
        }
    }
    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

//STL Rotate
void Stl_Rotate(int a[][1000], int n)
{

    //reverse
    for (int i = 0; i < n; i++)
    {
        reverse(a[i], a[i + 1]);
    }

    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

//Dispaly
void Display(int a[][1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

//Main Function
int main()
{

    int a[1000][1000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    /*Without-STl
    Rotate(a, n);
    Display(a, n);
    */
    //With STL
    Stl_Rotate(a, n);
    Display(a, n);
}