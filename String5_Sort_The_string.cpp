#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string extrctTokinization(string str, int key)
{ // give key th index value from string
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return s;
}

int convertToInt(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += ((s[i] - '0') * p);
        p *= 10;
    }
}
bool numricComp(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexioComp(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1 < key2;
}
int main()
{
    int n;
    cin >> n;

    cin.get();

    string array[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, array[i]);
    }

    int key;
    string reveseal, ordering;
    cin>>key>>reveseal>>ordering;

    pair<string, string> strPair[100];

    for (int i = 0; i < n; i++)
    {
        strPair->first = array[i];
        strPair->second = extrctTokinization(array[i], key);
    }

    //sorting
    if (ordering == "numeric")
    {
        sort(strPair, strPair + n, numricComp);
    }
    else
    {
        sort(strPair, strPair + n, lexioComp);
    }

    //reversing
    if (reveseal == "true")
    {
        for (int i = 0; i < n/2; i++)
        {
            swap(strPair[i], strPair[n - i - 1]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << strPair[i].first << endl;
        }
    }


    return 0;
}