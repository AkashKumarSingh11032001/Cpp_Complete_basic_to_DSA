#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int array[N][N];

    int val = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = val;
            val++;
        }
    }

    //print
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Anti-Spiral Pattern
    int start_col = 0;
    int start_row = 0;
    int end_col = N - 1;
    int end_row = N - 1;

    while (start_row <= end_row and start_col <= end_row)
    {

        //Left
        for (int i = start_row; i <= end_row; i++)
        {
            cout << array[i][start_col] << " ";
        }
        start_col++;

        //Bottom
        for (int i = start_col; i <= end_col; i++)
        {
            cout << array[end_row][i] << " ";
        }
        end_row--;

        //Right
        for (int i = end_row; i >= start_row; i--)
        {
            cout << array[i][end_col] << " ";
        }
        end_col--;

        //Top
        for (int i = end_col; i >= start_col; i--)
        {
            cout << array[start_row][i] << " ";
        }
        start_row++;
    }
}