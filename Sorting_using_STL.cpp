#include <iostream>
#include <algorithm>
using namespace std;


bool compare(int a, int b){
    return a>b;
}


int main()
{

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n); //increasing order
    //print
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " "<<endl;
    }
    
    sort(array, array + n, compare); //decreasing order
    //print
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " "<<endl;
    }
    
}
