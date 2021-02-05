#include<iostream>
using namespace std;

void print(int num)
{
    if(num == 0)
    {
        return;
    }
    
    print(num / 10);
    cout << num % 10;
    cout << ", ";
}

int main(){

    int a; // 1st array
    cin>>a;

    int a1[a];
    for(int i=0;i<a;i++){
        cin>>a1[i];
    }

    int b;  // 2nd array
    cin>>b;

    int a2[b];
    for(int i=0;i<b;i++){
        cin>>a2[i];
    }

    int f_sum=0;
    int s_sum=0;
    int sum=0;

    for(int i=0;i<a;i++){
       f_sum = f_sum*10 + a1[i];
    }

    for(int i=0;i<b;i++){
       s_sum = s_sum*10 + a2[i];
    }

    sum = f_sum + s_sum;
    
    print(sum);
    cout<<"End";


}