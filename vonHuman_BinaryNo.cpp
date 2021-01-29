#include<iostream>
#include <math.h>

using namespace std;   //Binary to Decimal Conversion !!!

int main(){
     int n;
     int testcase;
     cin>>testcase;

     while (testcase>0)
     {
         cin>>n;

        int ans = 0;
        int r, res, p=1;
        while(n>0){
            r = n%10;
            ans += r*p;
            p = p*2;
            n = n/10;
     }
     cout<<ans<<endl;
     testcase -= 1;
     
     
    }
    
}