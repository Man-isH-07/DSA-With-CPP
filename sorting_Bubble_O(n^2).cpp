/******************************************************************************

Bubble Sort O( n^2 )

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int arr[6]={15,6,5,4,34};
    int n = 6;
    int i,j;
    
    for( i=1;i<n;i++)
    {
        
        for( j=0;j<n-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
  
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}    
    