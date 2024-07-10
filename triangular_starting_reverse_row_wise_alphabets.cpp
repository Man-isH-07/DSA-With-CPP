/******************************************************************************

WAP : 

D
CD
BCD
ABCD

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int row=1;
    int n;
    cin>>n;
    
    while(row<=n)
    {
        int col =1;
        char start = 'A'+n-row;
        
        while(col<=row)
        {
            cout<<start;
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}