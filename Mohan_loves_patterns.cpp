/*
1     even row must have middle digit zero
11    odd row must have middle number as one
111
1001
11111
100001
*/  

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        if(row%2==0){
            cout<<1;
            while (col<=row-2)
            {
                cout<<0;
                col += 1;
            }
            cout<<1;
            

        }else{
            while (col <= row)
            {
                cout<<1;
                col += 1;
            }
            

        }
        cout<<endl;
        row += 1;

    }
}