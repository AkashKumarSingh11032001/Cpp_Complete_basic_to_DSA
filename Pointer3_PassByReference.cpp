#include<iostream>
using namespace std;

//Pass By Value(PBV) !!! {copy of variable are send}
void increment1(int a){
    a = a+1;
    cout<< "(PBV) Inside Function: "<<a<<endl;
}

//Pass By Reference(PBR) !!! {original value are send}
void increment2(int *b){
    *b = *b+1;
    cout<< "(PBR) Inside Function: "<<*b<<endl;
}

int main(){

    int a= 10;
    increment1(a);
    cout<< "(PBV) Inside Main: "<<a<<endl;

    int b= 10;
    increment2(&b);
    cout<< "(PBR) Inside Main: "<<b<<endl;

}