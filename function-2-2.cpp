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
        int running_sum = *(nums+i);
        globalSum = max(globalSum,running_sum);  
        for(int j=i+1; j<length; j++)
        { 
            running_sum += *(nums+j);
            globalSum = max(globalSum,running_sum);  
        }
    }
    return globalSum;
}