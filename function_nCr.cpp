/******************************************************************************

WAP to find nCr.

*******************************************************************************/

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    
    return fact;
}

int nCr(int n,int r)
{
    
    
    
    int numerator = factorial(n);
    int denominator = factorial(n-r) * factorial(r);
    
    int answer = numerator / denominator;
    
    cout<<answer<<endl;
    return 0;
}

int main()
{
    int n,r;
    cout<<"Enter N : "; cin >>n;
    cout<<"Enter R : "; cin >>r;
    nCr(n,r);

    return 0;
}