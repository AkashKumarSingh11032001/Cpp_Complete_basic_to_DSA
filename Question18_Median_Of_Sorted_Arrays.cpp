#include <iostream>
#include<algorithm>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int a1[N], a2[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a1[i];  // 1st array
    }
    for (int i = 0; i < N; i++)
    {
        cin >> a2[i]; //2nd array
    }

    int c[N+N]; //3rd array
    for (int i = 0; i < N; i++)
    {
        c[i] = a1[i];
    }
    for (int j = 0; j < N; j++)
    {
        c[j + N] = a2[j];
    }
    sort(c, c + N+N);
    int x = (sizeof(c)/sizeof(c[0]))/2;
    cout<<c[x-1];
    
}