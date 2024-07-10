/******************************************************************************

Power(a,b) by using fuctions.

*******************************************************************************/

#include <iostream>
using namespace std;

int power()
{
    int a,b;
    cout<<"Enter A : "; cin >>a;
    
    cout<<"\nEnter B : "; cin>>b;
    
    int ans = 1;
    
    for(int i=1;i<=b;i++)
    {
        ans = ans*a;
    }
    
    cout<<"\nPower Of ("<<a<<","<<b<<") is : "<<ans<<endl;
    
    return 0;
}

int main()
{
    power();

    return 0;
}