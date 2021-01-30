#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i =1;i<=n; i++){

        int val = i%2==0?1:0;

        //print i value in ith line
        for(int cnt = 1; cnt<=i; cnt++){
            cout<<val;
            val = 1-val;
        }
        cout<<endl;
    }
}