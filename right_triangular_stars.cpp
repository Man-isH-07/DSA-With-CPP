/******************************************************************************

WAP : 

    *
   **
  ***
 ****

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
        int space = n-row;
        
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}