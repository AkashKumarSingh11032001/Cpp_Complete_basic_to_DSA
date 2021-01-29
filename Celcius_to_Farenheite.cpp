#include<iostream>
using namespace std;

int main(){
    int F=0 , C;
    while(F<= 300){
        C = (5*(F-32))/9;
        cout<<F<<" "<< C<<endl;
        F += 20;
    }
}