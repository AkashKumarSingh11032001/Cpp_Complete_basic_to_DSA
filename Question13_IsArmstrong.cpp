#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    int p = n;
    int temp = n;

    int count = 0;

    while(n != 0){
        int r = n%10;
        n = n/10;
        count++;
    } //conting digit
    int res = 0;

    while(p != 0){
        int r = p%10;
        res = res + pow(r,count);
        p /= 10;
        
        
    } // calculating cube
    
    //comapring
    if(res == temp){
        cout<<"Armstrong"<<endl;
    }else{
        cout<<"not Armstrong"<<endl;
    }
    
    
}