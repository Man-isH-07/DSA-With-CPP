/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    
    int ans = power(a,b/2);
    
    if(b%2 == 0)
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    
    int ans = power(a,b);
    cout<<ans;

    return 0;
}