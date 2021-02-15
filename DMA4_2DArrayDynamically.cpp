#include<iostream>
using namespace std;

int main(){

    int **array;
    int r,c;
    cin>>r>>c;

    // create array of roe heads
    array = new int*[];

    //create array of arrays (2d array);

    for(int i=0;i<r;i++){
        array[i] = new int[c];
    }

    //tak input and print
    int val = 1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            array[i][j]=val;
            val++;
            cout<<array[i][j];

        }
        cout<<endl;
    }



    return 0;
}