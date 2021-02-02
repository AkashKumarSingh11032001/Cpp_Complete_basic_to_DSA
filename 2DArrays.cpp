#include <iostream>
using namespace std;

int main()
{

    int row, col;
    cin >> row;
    cin >> col;

    int array[row][col];

    //inisilizing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }

    //displaying
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}