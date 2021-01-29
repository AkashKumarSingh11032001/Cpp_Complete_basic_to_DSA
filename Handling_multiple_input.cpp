#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int no;
    while (n > 0)
    {
        cin>>no;
        cout<<no*no<<endl;
        n -= 1;
    }
    
}