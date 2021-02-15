#include<iostream>
using namespace std;

int main(){

    //static allocation
    int b[100];
    cout<<sizeof(b)<<endl;

    //dyananmic Allocation

    int n;
    cin>>n;
    int *a = new int[n];
    cout<<sizeof(a)<<endl;

    for(int i=0; i< n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    //delete dynamic array (deallocation)
    delete []a;
    



    return 0;
}