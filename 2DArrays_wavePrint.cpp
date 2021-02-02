#include <iostream>
using namespace std;

int main()
{

    int row, col;
    cin >> row;
    cin >> col;

    int array[row][col];

    //inisilizing
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

    //displaying
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    

    //Wave Print
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++) //ittrate top to botam
            {
                cout << array[i][j] << " ";
            }
        }
        else
        {
            for (int i = row-1; i >= 0; i--) //ittrate bottom to top
            {
                cout << array[i][j] << " ";
            }
        }
        
    }

    return 0;
}