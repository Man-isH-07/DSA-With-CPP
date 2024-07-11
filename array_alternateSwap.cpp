/******************************************************************************

WAP for Alternate Array. 

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

void alternateSwap(int array[],int size)
{
   for(int i=0;i<size;i+=2)
   {
       if(i+1 < size)
       {
           swap(array[i],array[i+1]);
       }
   }
  
}
void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<"\t";
    }
}

int main()
{
   int even_array[6]={1,2,3,4,5,6};
   int odd_array[5]={1,2,3,4,5};
   
   cout<<"Before Reverse Even Array :";
   printArray(even_array,6);
   
   cout<<"\nAfter Reverse Even Array :";
   alternateSwap(even_array,6);
   printArray(even_array,6);
   
   cout<<"\nBefore Reverse Odd Array :";
   printArray(odd_array,5);
   cout<<"\nAfter Reverse Odd Array :";
   alternateSwap(odd_array,5);
   printArray(odd_array,5);
    
 
    return 0;
}