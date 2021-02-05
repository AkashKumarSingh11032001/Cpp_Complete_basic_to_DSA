#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int N;
    cin>>N;

    int array[N][N];

    int val=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            array[i][j] = val;
            val++;
        }
        cout<<endl;
    }

    //print
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << array[i][j]<<" ";
        }
        cout<<endl;
    }
    

    //Reverse using STL
    for(int i=0;i<N;i++){
        reverse(array[i],array[i+1]);
    }

    //Transpose
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i<j){
                swap(array[i][j],array[j][i]);

            }
            
        }
    }

    //Rotated print
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << array[i][j]<<" ";
        }
        cout<<endl;
    }


}