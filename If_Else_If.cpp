#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n%2==0 and n%3 == 0){
        cout<<"Div by two and three !!!"<<endl;
    }else if(n%2==0){
        cout<<"Div by two !!!"<<endl;
    }else{
        cout<<"Div by three !!!"<<endl;
    }
}