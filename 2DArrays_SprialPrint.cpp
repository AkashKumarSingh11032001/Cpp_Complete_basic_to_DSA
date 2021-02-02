#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row;
    cin >> col;

    int array[row][col];

    int val = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = val;
            val++;

        }
        cout<<endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j]<<" ";
        }
        cout<<endl;
    }

    //Spiral print
}