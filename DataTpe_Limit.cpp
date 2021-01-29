#include<iostream>
using namespace std;

int main(){

    int x = 5000;
    float y = 10.245;
    bool z = true;
    double p = 3.14113121212;
    char q = 'A';

    // Memory occupy by Datatype.

    cout <<"Int : "<< sizeof(x) <<endl;  // 4 byte  // MAX: unsigned(0-2^32-1 ) || signed(2^-31 to 2^31-1)
    cout <<"Float : "<< sizeof(y) <<endl; // 4 byte // MAX:
    cout <<"Bool : "<< sizeof(z) <<endl; // 1 byte  // MAX:
    cout <<"Double : "<< sizeof(p) <<endl; // 8 byte // MAX:
    cout <<"Char : "<< sizeof(q) <<endl; // 1 byte // MAX: 0 to 255  = 256 combination

    // Data Modifier : long || short || signed(+ve and -ve both) || unsigned(only +ve)
    // when you exceed the max limit then you will land to "Wrap Around" phenomena i.e overflow -> +ve shift to -ve side.
}