#include <iostream>
using namespace std;

int MatrixSearch(int **a, int n, int m, int element)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == element)
            {
                return 1;
            }
        }
    }
}
int main()
{

    int N, M;
    cin >> N >> M;

    int **array = new int*[N]; //passing 2d array as in a function
    for(int i=0;i<N;i++) {
        array[i]=new int[M];
    }

    int val = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            array[i][j] = val;
            val++;
        }
    }

    //print
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int elemnt_to_search;
    cin >> elemnt_to_search;

    int check = MatrixSearch(array, N, M, elemnt_to_search);

    if (check == 1)
    {
        cout << "Output = 1";
    }else{
        cout << "Output = 0";
    }
}