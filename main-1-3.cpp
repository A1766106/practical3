
#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main()
{
    int length;
    cout << "How long would you like the array to be? ";
    cin >> length;
    int old_array[length];
    int new_array[length];
    for(int i=0; i<length; i++)
    {
        cout << "Please enter an element ";
        cin >> old_array[i];
    }
    copy_integers(old_array, new_array, length);

    return 0;
}