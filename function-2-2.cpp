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
    for(int j=0;j<length;j++)
    {
        for(int i=0; i<length; i++)
        {
            int current_Sum = *(nums + i);
            while(i != length)
            {   
                i++;
                if(current_Sum + *(nums + i)>current_Sum)
                {
                    current_Sum = current_Sum + *(nums + i);
                }
                else
                {
                    i = length;
                }
                
            }
            if(current_Sum> highest_Number)
            {
                highest_Number = current_Sum;
            }
        }  
    }

    return highest_Number;
}