/******************************************************************************

Binary Search .

Time Complexity : O( log n )

*******************************************************************************/

#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    
    int mid = (start + end)/2;
    
    int ans = -1;
    
    while(start <= end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid - 1;
        }
        
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = (start + end)/2;
        
    }
    
    return ans;
}

int lastOcc(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    
    int mid = (start + end)/2;
    
    int ans = -1;
    
    while(start <= end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid + 1;
        }
        
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = (start + end)/2;
        
    }
    
    return ans;
}

int main()
{
    int arr[5]={20,30,40,40,50};
    int key = 40;
    
    int leftmostOcc = firstOcc(arr,5,key);
    
    int rightmostOcc = lastOcc(arr,5,key);
    
    cout<<leftmostOcc<<" "<<rightmostOcc;
    return 0;
}

