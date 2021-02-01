#include <iostream>
#include <algorithm>
using namespace std;

void readLine(char a[], int maxLen, char delim = '\n')
{

    int i = 0;
    char ch = cin.get();
    while (ch != delim)
    {
        a[i] = ch;
        i++;
        if (i == maxLen - 1)
        {
            break;
        }
        ch = cin.get();
    }
    a[i] = '\0';
    return;
}
int main()
{
    char a[1000];
    //method1...cin >> a;                // cin doesn't allow spaces
    // method 2...readLine(a, 1000, '$'); //cin.get() read charater even spaces but not new line chraters'\n'
    cin.getline(a,1000,'$'); //predefined module
    cout << a << endl;

    return 0;
}