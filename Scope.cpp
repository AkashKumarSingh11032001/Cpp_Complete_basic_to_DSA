#include <iostream>
using namespace std;

//scope- lifetme and visibility
//local scope and global scope

int x = 100; //gloabal scope ->x1

int main()
{

    int x = 20; //local scope ->x2
    cout << x << endl;

    for (int x = 0; x <= 50; x++)
    { //->x3
        cout << "Local Scope " << x << endl;
    }
    cout << "Local X:" << x << endl;
    cout << "Global X:" << ::x << endl;
}