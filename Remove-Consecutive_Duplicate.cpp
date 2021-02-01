#include <iostream>
#include <cstring>
using namespace std;

void ConsecutiveTerms(char ch[])
{
    int length = strlen(ch);
    if (length == 1 or length == 0)
    {
        return;
    }
    int prev_char = 0;
    for (int curr_char = 1; curr_char < length; curr_char++)
    {
        if (ch[curr_char] != ch[prev_char])
        {
            prev_char++;
            ch[prev_char] = ch[curr_char];
        }
    }
    ch[prev_char+1] = '\0';
    return;
}
int main()
{

    char ch[100];
    cin.getline(ch, 100);
    ConsecutiveTerms(ch);
    cout<<ch<<endl;
}