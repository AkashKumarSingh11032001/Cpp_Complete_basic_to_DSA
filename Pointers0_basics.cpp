#include<iostream>
using namespace std;

int main(){

    int a = 8;
    cout<< &a <<endl;

    float b = 9;
    cout<< &b <<endl;

    // address opr not work on charater
    char ch = 'A';
    cout<< &ch <<endl;

    //Explecit conversion : convert char* to void * inorder to get address of character
    cout<< (void *)&ch <<endl;
}