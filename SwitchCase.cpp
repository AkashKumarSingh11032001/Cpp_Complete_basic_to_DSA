#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    while (ch != '$')
    {
        switch (ch)
        {
        case 'B':
            cout << "Burger"<<endl;
            break;
        case 'M':
            cout << "Maggi"<<endl;
            break;
        case 'P':
            cout << "Pizza"<<endl;
            break;
        case 'C':
            cout << "Coke"<<endl;
            break;
        case 'D':
            cout << "Dosa"<<endl;
            break;
        default:
            cout << "Please input valid recepi"<<endl;
            break;
        }

        cin >> ch;
    }

    return 0;
}