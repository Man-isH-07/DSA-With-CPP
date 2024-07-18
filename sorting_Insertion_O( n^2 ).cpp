
/******************************************************************************

Insertion Sort   
O( n^2 )  -----> Worst Complexity
O( n ) --------> Best Complexity              

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int arr[6]={15,6,5,4,34};
    int n = 6;
    int i,j,temp;
    for( i=1;i<n;i++)
    {
        temp = arr[i];
        
        for( j=i-1;j>=0;j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        
        arr[j+1] = temp;
    }
  
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}    
    