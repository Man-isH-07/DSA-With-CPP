#include <iostream>
using namespace std;

/*  WAP To print 2^n .


    #include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    
    return n * fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    
    int ans = fact(n);
    cout<<ans;
    
    return 0;
}


*/

// WAP To print n^n . 

int power(int base , int n)
{
    if(n==0)
    {
        return 1;
    }
    
    return base * power(base , n-1);
}

int main()
{
    int n;
    int base;
    cin>>base;
    cin>>n;
    
    int ans = power(base , n);
    cout<<ans;
    
    return 0;
}