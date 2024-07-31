/******************************************************************************

For Positive integer N , Print No. of set bits .

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{ 
    int n;
    int count=0;
    int bit;
    
    cout << "Enter N : ";
    cin >> n;
    while(n!=0)
    {
        int bit = n%2;
        
        n=n/2;
        
        if(bit==1)
        {
            count++;
        }
    }
    
    cout<<"\n"<<count;

    return 0;
}