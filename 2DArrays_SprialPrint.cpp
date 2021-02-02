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
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    //Spiral print

    int start_row = 0;
    int start_col = 0;
    int end_row = row-1;
    int end_col = col-1;

    while (start_row <= end_row and start_col <= end_row)
    {
        //first row{top}
        for (int i = start_col; i <= end_col; i++)
        {
            cout << array[start_row][i] << " ";
        }
        start_row++;

        //end row(left)
        for (int i = start_row; i <= end_row; i++)
        {
            cout << array[i][end_col] << " ";
        }
        end_col--;

        //bottom row(down)
        if (end_row > start_row)
        {
            for (int i = end_row; i >= start_col; i--)
            {
                cout << array[end_row][i] << " ";
            }
            end_row--;
        }

        //start row(right)
        if (end_col > start_col)
        {
            for (int i = end_row; i >= start_row; i--)
            {
                cout << array[i][start_col] << " ";
            }
            start_col++;
        }
    }

    return 0;
}