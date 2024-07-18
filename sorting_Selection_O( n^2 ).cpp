/******************************************************************************

Selection Sort

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int arr[6]={15,6,5,4,34};
    int n = 6;
    int i,j;
    
    for( i=0;i<n-1;i++)
    {
        int minIndex = i;
        
        for( j=i+1;j<n;j++)
        {
            if(arr[j] < arr[minIndex])
            {
             int temp = arr[minIndex];
             arr[minIndex] = arr[j];
             arr[j] = temp;
            }
        }
    }
  
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}    
    