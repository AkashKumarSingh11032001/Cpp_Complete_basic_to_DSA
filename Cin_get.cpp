#include<iostream>
using namespace std;

int main(){

    char ch;
    ch = cin.get(); //this method reads any single char including spaces/newlines.

    while(ch != '.'){
        cout<<ch; //print the last character we have read
        ch = cin.get(); //update my char in the memory(read next char and read rest of the charater)

    }
}