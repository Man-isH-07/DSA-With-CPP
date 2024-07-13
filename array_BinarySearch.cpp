/******************************************************************************

Binary Search .

Time Complexity : O( log n )

*******************************************************************************/

#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    
    int mid = (start + end)/2;
    
    while(start <= end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        
        if(key >= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = (start + end)/2;
        
    }
    
    return -1;
}

int main()
{
    int arr[5]={20, 30, 40, 50, 60};
    int key = 50;
    
    int index = binarySearch(arr,5,key);
    
    if(index == -1)
    {
        cout<<"Key "<<key<<" is not found in an given array .";
    }
    else
    {
        cout<<"Key "<<key<<" is found at index "<<index<<" in an given array ";
    }
    return 0;
}