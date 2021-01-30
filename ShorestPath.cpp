#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    char dir;
    dir = cin.get();
    //cout<<dir<<endl;

    while (dir != '\n')
    {
         if (dir == 'N' or dir == 'n')
        {
            y++;
        }
        else if (dir == 'E' or dir == 'e')
        {
            x++;
        }
        else if (dir == 'S' or dir == 's')
        {
            y--;
        }
        else
        {
            x--;
        }
        dir = cin.get();
    }

    cout << "x cordinate:" << x <<endl;
    cout << "y cordinate:" << y << endl;

    return 0;
}