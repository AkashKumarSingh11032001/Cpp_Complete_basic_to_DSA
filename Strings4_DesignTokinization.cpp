#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char *my_strtok(char *str, char dlim)
{
    // string n dlimeliter

    static char *input = NULL;
    if (str != NULL)
    {
        //we make first call
        input = str;
    }

    if (input == NULL)
    {
        return NULL;
    }
    //start extracting token and store them in array
    char *output = new char[strlen(input) + 1];
    int i = 0;
    for (i = 0; input[i] != '\0'; i++)
    {

        if (input[i] != dlim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    //corner case
    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{

    char s[100] = "Hello World I am exp one here";

    char *ptr = strtok(s, " ");
    cout << ptr << endl;

    while (ptr != NULL) // this for seprating each word by space
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl; /* code */
    }

    return 0;
}