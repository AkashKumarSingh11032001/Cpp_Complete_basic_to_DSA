#include<iostream>
using namespace std;

int main(){
    
    int n1,n2;
    cin>>n1;
    cin>>n2;

    int count = 0;

    while(n1 != 0){

        int r = n1 %10;
        if(r == n2){
            count ++;
        }
        n1 /= 10;

    }
    cout<<"Output :"<<count<<endl;
}