#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    int array[N];
    for(int i=0;i<N; i++){
        cin>>array[i];
    }
    
    int max=0;
    for(int i=0;i<N; i++){
        if(array[i] > max){
            max =array[i];
        }
    }
    cout<<"Largest Value : "<<max<<endl;


}