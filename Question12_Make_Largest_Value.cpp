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


    //print Decreasing array
    for(int i=0;i<N;i++){
        cout<<array[i]<<"*";
    }

    string temp;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - i; ++j) {
            if (array[j] >array[j + 1]) {
            temp =array[j];
            array[j] =array[j + 1];
            array[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < N; ++i)
    {
       cout << array[i] << endl;
    }

}