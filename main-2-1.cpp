#include <iostream>
#include <stdlib.h>

using namespace std;

extern void multiples_of_seven(int *nums,int length) ;

int main()
{
    int length;
    cout << "How long would you like the array to be? ";
    cin >> length;
    int array[length];
    for(int i=0;i<length;i++)
    {
        cout << "Please enter element: ";
        cin >> array[i];

    }
    int *nums = array;
    multiples_of_seven(nums, length);
}