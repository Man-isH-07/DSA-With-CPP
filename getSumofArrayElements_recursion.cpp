/******************************************************************************

Checking Sorted or not by Recurssion .

*******************************************************************************/
#include <iostream>
using namespace std;

int getSum(int arr[],int size,int sum)
{
    if(size == 0)
    {
        return 0;
    }
    
    if(size==1)
    {
        return arr[0];
    }
    
    int remainpart = getSum(arr+1,size-1,sum);
    sum = arr[0] +  remainpart;
    return sum;
    
}

int main()
{
    int size; cin>>size;
    int arr[size]; 
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    int sum=0;

    int ans = getSum(arr,size,sum);
    
        cout<<ans;
    
    
    
    return 0;
}