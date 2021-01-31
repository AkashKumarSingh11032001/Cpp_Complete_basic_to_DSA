#include <iostream>
using namespace std;

int main()
{

    char ch;
    cin >> ch;

    int n1, n2;
    int res = 0;

    do
    {

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
        {
            switch (ch)
            {
            case '+':
                cin >> n1;
                cin >> n2;
                res = n1 + n2;
                break;
            case '-':
                cin >> n1;
                cin >> n2;
                res = n1 - n2;
                break;
            case '*':
                cin >> n1;
                cin >> n2;
                res = n1 * n2;
                break;
            case '/':
                cin >> n1;
                cin >> n2;
                res = n1 / n2;
                break;
            case '%':
                cin >> n1;
                cin >> n2;
                res = n1 % n2;
                break;
            }
            cout << "Result :" << res << endl;
        }
        else
        {
            if (ch != 'X' && ch != 'x')
            {
                cout << "Invalid operation. Try again.";
            }
        }
    } while (ch != 'X' && ch != 'x');


    return 0;
}