/******************************************************************************

Checking Sorted or not by Recurssion .

*******************************************************************************/
#include <iostream>
using namespace std;

bool RBS(int arr[],int size,int start,int end,int key)
{
    if(start>end)
    {
         return false;
    }
    
    int mid = (start+end)/2;
    
    if(arr[mid] == key)
    {
        return true;
    }
    
    if(arr[mid] > key)
    {
        return RBS(arr,size, start, mid-1, key);
    }
    else
    {
        return RBS(arr,size, mid+1, end, key);
    }
    
    
}

int main()
{
    int size; cin>>size;
    int arr[size]; 
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    
    int start = 0;
    int end = size-1;
    
    bool ans = RBS(arr,size, start, end, key);
    if(ans)
    {
        cout<<"FOUND";
    }
    else
    {
        cout<<"NOT FOUND";
    }
    
    
    return 0;
}