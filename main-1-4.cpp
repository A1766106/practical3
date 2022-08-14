#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>


using namespace std;

extern void copy_doubles(double *old_array,double *new_array,int length) ;

int main()
{
    int length;
    cout << "What is the length of the array? ";
    cin >> length;
    double old_array[length];
    double new_array[length];
    double *ptr_Old = old_array;
    double *ptr_New = new_array;
    for(int i=0; i<length; i++)
    {
        cout << "Please enter an element: ";
        cin >> old_array[i];
    }
    copy_doubles(ptr_Old, ptr_New, length);
    return 0;
}