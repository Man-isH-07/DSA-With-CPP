/******************************************************************************

WAP : 
A
BC
CDE
DEFG


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
        
        
        while(col<=row)
        {
            char ch='A'+row+col-2;
            cout<<ch;
           
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}