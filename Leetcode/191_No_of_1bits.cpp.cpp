/******************************************************************************

Leetcode 191. Number of '1' bits (hamming weight).

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n=000000000000000000000000000010111;
    int count = 0;
    
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        
        n=n>>1;
    }
    
    cout<<count;
    return 0;
}