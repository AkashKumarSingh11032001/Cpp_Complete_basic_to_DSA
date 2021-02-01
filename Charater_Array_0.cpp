#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //********


    int n;
    cin >> n;

    char array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " "<<endl;
    }


    //********

    int x[] = {1,2,3};
    cout<< x <<endl;

    char y[] = {'a','b','c','\0'};
    cout<< y <<endl;

    //******
    char s[10];
    cin >> s;
    cout << s;



    return 0;
}