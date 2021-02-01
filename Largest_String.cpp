#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int n;
    cin >> n;

    char ch[1000];
    char largest[1000];

    int len = 0;
    int large_len = 0;
    cin.get(); //skipping '\n'

    for (int i = 0; i < n; i++)
    {
        cin.getline(ch, 1000);
        //cout<<ch<<endl;
        len = strlen(ch);
        if (len > large_len)
        {
            large_len = len;
            strcpy(largest, ch); //find largest sting
        }
    }
    cout << largest << " and " << large_len << endl;
    return 0;
}