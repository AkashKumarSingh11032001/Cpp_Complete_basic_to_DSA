#include <iostream>
using namespace std;

int main()
{

    int testcase;
    cin >> testcase;

    

    int j =1; //for test case
    while(testcase>0)
    {
        int n;
        cin >> n;

        int sum = 0;
        
        while (n != 0)
        {
            int r = n % 10;
            sum = sum + r;
            n = n / 10;
        }
        cout<<sum<<endl;

        if (sum % 2 == 0 and sum % 4 == 0)
        {
            cout << "Yes" << endl;
        }
        else if (sum % 2 != 0 and sum % 3 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        testcase -= 1;

        return 0;
    }
}