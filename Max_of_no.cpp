#include<iostream>
#include<climits>
using namespace std;

int main(){

    
    int n;
    cin>>n;

    int max = INT_MAX;
    int min= INT_MIN;

    int number;

    for (int i = 0 ; i< n; i++){
        cin>>number;
        
        if(number < max){
            min = number;
        }
        if(number > max){
            max = number;
        }   
    }
    cout<<"Max number is : "<<max<<endl;
    cout<<"Min number is : "<<min<<endl;
    return 0;
}