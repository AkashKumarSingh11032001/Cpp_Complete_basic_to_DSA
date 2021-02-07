#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Intisilization
    string s0;
    string s1("Hello");
    string s2 = "Hellow Worls";
    string s3(s2);
    string s4 = s3;

    char a[] = {'a', 'b', 'c', '\0'};
    string s5(a);

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    //in-biuld function
    //empty()
    if (s0.empty())
    {
        cout << "s0 is empty" << endl;
    }
    //append()
    s0.append("I love Ao");
    cout << s0 << endl;
    s0 += " and my parents";
    cout << s0 << endl;
    //clear() and length()
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;
    //comapre()  if(both same then ==)

    s0 = "Akash";

    s1 = "Archana";
    cout << s1.compare(s0) << endl;
    //overlaod opr
    if (s0 > s1)
    {
        cout << "s0 is lexugaphically greater than s1" << endl;
    }
    else
    {
        cout << "s1 is lexugaphically greater than s0" << endl;
    }

    //square bract
    cout << s0[0] << endl;

    //find substring
    string a1;
    a1 = "I Love India and I love to be Indian. ";
    int idx = a1.find("and");
    cout << idx << endl;

    //remove substring
    string word = "and";
    int len = word.length();
    cout << a1 << endl;
    a1.erase(idx, len);
    cout << a1 << endl;

    //irrate over all char in string ***

    // simple Loop
    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << ":";
    }
    cout << endl;
    //or begin() and end()
    for (auto i = s1.begin(); i != s1.end(); i++)
    {
        cout << (*i) << ",";
    }
    cout << endl;
    //or For Each Loop
    for (auto c : s1)
    {
        cout << c << ".";
    }
    cout << endl;
    //***
}