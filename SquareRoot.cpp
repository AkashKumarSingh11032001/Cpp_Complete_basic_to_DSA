#include<iostream>
using namespace std;

int main(){

    int n;
    int p;
    cin>>n>>p;

    float ans=0;
    float inc = 1.0;

    for(int time = 0; time<=p; time++){

    while(ans*ans <= n){
        ans = ans + inc;
    }
    ans = ans - inc;
    inc = inc/10;
    }
    cout<<ans<<endl;

return 0;
}