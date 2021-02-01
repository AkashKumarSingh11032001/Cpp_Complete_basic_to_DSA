#include <iostream>
#include <cstring>
using namespace std;

bool Plalideome(char ch[])
{

    int i = 0;
    int j = strlen(ch) - 1;

    while (i < j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{

    char ch[1000];
    cin.getline(ch, 1000);
    if (Plalideome(ch))
    {
        cout << "It is Pallidrome";
    }
    else
    {
        cout << "Not a pallidrome";
    }
}