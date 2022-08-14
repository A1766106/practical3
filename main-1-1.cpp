#include <iostream>
#include <stdlib.h>

using namespace std;

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main()
{
 string first[3][2];
 string second[3][2];
 int n = 3;
 for(int i=0; i<3; i++)
 {
    for(int j=0; j<2;j++)
    {
        cout << "What would you like to initialize row " << i << " column " << j << " with? ";
        cin >> first[i][j]; 
    }

 }

    string_2d_copy(first, second, n);   
    return 0; 
}