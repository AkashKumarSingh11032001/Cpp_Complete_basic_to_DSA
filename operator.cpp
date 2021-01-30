#include <iostream>
using namespace std;

int main()
{

    //comma opr
    int a, b, c;

    //logical opr
    if (c > a and c > b)
    {
        cout << "Hello" << endl;
    }

    //tenerary opr
    10 % 2 == 0 ? cout << "True" : cout << "False";

    //Bitwise opr
    int x = 5;
    int y = 7;
    cout << "And " << (x & y) << endl;
    cout << "OR " << (x | y) << endl;
    cout << "Xor " << (x ^ y) << endl;

    //shift opr
    x = x << 2;
    cout << x << endl;
    cout << (y >> 1) << endl;

    //uniary opr
    cout << &x << endl;

    //increment/decre opr
    int p = 10;
    int z = p++;
    cout << z << endl;
    z = ++p;
    cout << z << endl;
}