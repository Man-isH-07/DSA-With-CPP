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
    
    while(row<=n)
    {
        int col =1;
        int space=row-1;
        
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(col<=star)
        {
            cout<<"*";
            col++;
        }
         
        
        cout<<endl;
        star--;
        row++;
    }

    return 0;
}