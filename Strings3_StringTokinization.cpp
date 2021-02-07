#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    char s[100] = "Hello World I am exp one here";

    char *ptr = strtok(s, " ");
    cout << ptr << endl;

    while (ptr != NULL) // this for seprating each word by space
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl; /* code */
    }

    return 0;
}