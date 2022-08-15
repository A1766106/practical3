#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>


using namespace std;

void copy_integers(int old_array[],int new_array[],int length)
{
    int *ptr_Old = old_array;
    int *ptr_New = new_array;
    for(int i=0; i<length; i++)
    {
        *(ptr_New + i)= *(ptr_Old + i);
    }
    // for(int i=0; i<length; i++)
    // {
    //     cout << *(ptr_New+i) << " ";
    // }
    return;
}