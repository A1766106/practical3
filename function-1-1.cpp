#include <iostream>
#include <stdlib.h>

using namespace std;

void string_2d_copy(std::string first[][2], std::string second[][2], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            second[i][j] = first[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(j!=1)
            {
              cout << second[i][j] << " ";  
            }
            else
            {
                cout << second[i][j];
            } 
        }
        cout << endl;
    }
    return;
}