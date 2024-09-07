/******************************************************************************

Any Digit

Input : 412
Output : Four One Two 

*******************************************************************************/

#include <iostream>
using namespace std;

void sayDigit(int n,string arr[])
{
    if(n==0)
    {
        return;
    }
    
    int digit = n%10;
    n = n / 10;
    
    sayDigit(n,arr);
    
    cout<<arr[digit]<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    
    string arr[10]={"Zero","One","Two","Three","Four","five","Six","Seven","Eight","Nine"};
    
    sayDigit(n,arr);

    return 0;
}