/******************************************************************************

Checking Sorted or not by Recurssion .

*******************************************************************************/
#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    if(size == 0)
    {
        return false;
    }
    
    if(arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr+1,size-1,key);
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
    
    bool ans = linearSearch(arr,size,key);
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