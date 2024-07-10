/******************************************************************************

Leetcode 1281. Return the difference between the product of its digit and sum of its digit.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;
    
    int product =1;
    int sum=0;
    
    for(int i=1;i<=n;i++)
    {
        int digit = n%10;
        
        product = product*digit;
        sum = sum+digit;
        
        n = n/10;
    }
    
    cout<<"Product : "<<product<<"  "<<"Sum : "<<sum<<endl;
    
    cout<<"Difference : "<<product-sum;
    
    return 0;
}