#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){

    int N;
    cin>>N;

    string array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }


    //major code just checking(11 12 13 14) ==> 11+12(1112) > 12+11(1211)? swap:contiues
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(array[j]+array[i] > array[i]+array[j]){
                swap(array[i],array[j]);
            }
            
        }
        
    }

    
    //final Number
    for(int i = 0; i < N; ++i)
    {
       cout << array[i];
    }

}