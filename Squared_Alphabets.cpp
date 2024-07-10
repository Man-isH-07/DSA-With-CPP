/******************************************************************************

WAP : A B C
      D E F
      G H I

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int row=1;
    int n;
    cin>>n;
    
    char ch='A';
    
    while(row<=n)
    {
        int col =1;
        
        while(col<=n)
        {
            cout<<ch;
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}