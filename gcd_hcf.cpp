// Find : GCD or HCF

/*
    Logic : Euclid's Formula : 
            gcd(a,b) = gcd(a-b,b)
*/

/*
	Extra : lcm(a,b) * gcd(a,b) = a*b 
*/

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    
    if(b==0)
        return a;
        
    if(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    
    cout<<"Enter b : ";
    cin>>b;
    
    int ans = gcd(a-b,b);
    cout<<"GCD("<<a<<","<<b<<") : "<<ans;
    return 0;
}