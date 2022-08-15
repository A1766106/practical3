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
    int globalSum = 0;
    for(int i=0; i<length; i++)
    {
        int ptr = i + 1;
        int running_sum = *(nums+i);
        while(ptr < length)
        {   
            running_sum += *(nums+ptr);
            globalSum = max(globalSum,running_sum);

            ptr++;
            
        }
    }
    return globalSum;
}