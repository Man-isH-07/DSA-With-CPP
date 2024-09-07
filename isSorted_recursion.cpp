/******************************************************************************

Checking Sorted or not by Recurssion .

*******************************************************************************/
#include <iostream>
using namespace std;

bool isSort(int arr[],int size)
{
    if(size == 0)
    {
        return false;
    }
    
    if(size==1)
    {
        return true;
    }
    
    if(arr[0] < arr[1])
    {
        return isSort(arr+1,size-1);
    }
    else
    {
        return false;
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
    

    bool ans = isSort(arr,size);
    
    if(ans)
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
    
    return 0;
}