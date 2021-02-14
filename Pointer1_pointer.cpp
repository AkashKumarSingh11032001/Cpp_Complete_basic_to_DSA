#include<iostream>
using namespace std;

int main(){

    int x =8;
    int y=10;
    int *ptr = &x;

    cout<< x <<endl;
    cout<< &x <<endl;
    cout<< ptr <<endl;


    // we can later change ptr value also
    ptr = &y;
    cout<<ptr<<endl;


}