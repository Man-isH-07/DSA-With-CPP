/******************************************************************************

WAP : 123 to 321.

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;
    
    int ans=0;
    
    for(int i=0;n!=0;i++)
    {
        int digit = n%10;
        
        ans = (ans*10)+digit;

        n=n/10;
    }
    
    cout<<ans;
    return 0;
}