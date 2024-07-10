/******************************************************************************

WAP : 
A
BB
CCC
DDDD

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
        
        while(col<=row)
        {
            cout<<ch;
            col++;
        }
        cout<<endl;
        ch++;
        row++;
    }

    return 0;
}