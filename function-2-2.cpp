#include <iostream>
#include <stdlib.h>

using namespace std;

int max_sub_sum(int *nums,int length)
{
    if(length<1)
    {
        return 0;
    }
    int count = 0;
    for(int i=0;i<length;i++)
    {
        if(*(nums + i) < 0)
        {
            count = count + 1;
        }
    }
    if(count == length)
    {
        return 0;
    }
    int highest_Number = *nums;
    int current_Sum = 0;
    for(int i=0; i<length; i++)
    {
        current_Sum = *(nums + i);
        int temp = current_Sum;
        int lengthPTR = i;
        while(temp == current_Sum && lengthPTR != length)
        {
            temp = current_Sum + *(nums + lengthPTR);
            lengthPTR = lengthPTR + 1;
            if(temp > current_Sum)
            {
                current_Sum = temp;
            }
        }
        if(current_Sum> highest_Number)
        {
            highest_Number = current_Sum;
        }
    }
    return highest_Number;
}