#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int des;
    des = (b * b) - (4 * a * c);
    if (des == 0)
    {
        cout << "Real and Equal" << endl;
        cout << ((-b - sqrt(des)) / 2 * a) << " " << ((-b + sqrt(des)) / 2 * a);
    }
    else if (des > 0)
    {
        cout << "Real and Distinct" << endl;
        cout << ((-b - sqrt(des)) / 2 * a) << " " << ((-b + sqrt(des)) / 2 * a);
    }
    else
    {
        cout << "Imaginary" << endl;
    }
}