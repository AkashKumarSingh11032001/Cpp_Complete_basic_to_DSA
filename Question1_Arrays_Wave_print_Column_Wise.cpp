#include <iostream>
using namespace std;

int main()
{

    int row, col;
    cin >> row >> col;

    int val = 1;
    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = val;
            val++;
        }
    }

    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)  // Top to Bottom
            {
                cout << array[i][j] << ",";
            }
        }
        else
        {
            for (int i = row - 1; i > 0; i--)  //Bottom to Top
            {
                cout << array[i][j] << ",";
            }
        }
    }
    cout << "End";
}