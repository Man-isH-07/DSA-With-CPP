/******************************************************************************

WAP to check that given number is Even Or Odd.

*******************************************************************************/

#include <iostream>
using namespace std;

int EvenOdd()
{
    int n;
    cout<<"Enter N : "; cin >>n;
    
    if(n%2==0)
    {
        cout<<n<<" is even number"<<endl;
    }
    else
    {
        cout<<n<<" is odd number"<<endl;
    }
    
    
    return 0;
}

int main()
{
    EvenOdd();

    return 0;
}