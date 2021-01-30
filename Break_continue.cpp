#include <iostream>
using namespace std;

int main()
{

    int n;

    while (true)
    {
        cin >> n;

        if (n % 7 == 0)
        {
            cout<<"skip"<<endl;
            continue;
            cout << n << " Div by 7" << endl;
            //break;
            
        }
        cout << "No : " << n << endl;
    }
    cout << "loop end";
    return 0;
}