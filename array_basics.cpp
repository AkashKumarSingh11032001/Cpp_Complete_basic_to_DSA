#include<iostream>
using namespace std;

int main(){

    int array[10] = {1,2,3};

    for(int i =0;i<3;i++){ //user input
        cin>>array[i];
    }


    for(int i =0;i<10;i++){
        cout<<array[i]<<",";
    }
}