/******************************************************************************

WAP : 

****
***
**
*

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int row=1;
    int n;
    cin>>n;
    int star =n;
    int space=row-1;
    
    while(row<=n)
    {
        int col =1;
        
        
        while(col<=star)
        {
            cout<<"*";
            col++;
        }
         while(space)
        {
            cout<<" ";
            space++;
        }
        
        cout<<endl;
        star--;
        row++;
    }

    return 0;
}