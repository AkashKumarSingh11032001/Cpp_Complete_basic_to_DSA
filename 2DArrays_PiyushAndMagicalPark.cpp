#include <iostream>
using namespace std;

int Magical_Park(char a[][100], int m, int n, int k, int s)
{

    bool Sucess = true;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = a[i][j];

            //check
            if (s < k)
            {
                Sucess = false;
                break;
            }

            if (ch == '*')
            {
                s += 5;
            }
            else if (ch == '.')
            {
                s -= 2;
            }
            else
            {
                break;
            }
            //we also loose one point move right (forwar) except last col
            if (j != n - 1)
            {
                s--;
            }
        }
        if (Sucess)
        {
            cout << "Yes"<<endl;
            cout << s << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int main()
{

    int m, n, s, k;
    cin >> m >> n >> k >> s;

    char Park[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> Park[i][j];
        }
    }
    Magical_Park(Park, m, n, k, s);
}