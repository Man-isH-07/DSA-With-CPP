/******************************************************************************

WAP : 

    1
   121
  12321
 1234321

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
        
        //1st triangle of spaces
        int space=n-row;
        
        while(space)
        {
            cout<<" ";
            space--;
        }
        
        //2nd triangle of numbers
        while(col<=row)
        {
            cout<<col;
            col++;
        }
        
        //3rd triangle of number
        int start =row-1;
        while(start)
        {
            cout<<start;
            start--;
        }
         
        
        cout<<endl;
        row++;
    }

    return 0;
}