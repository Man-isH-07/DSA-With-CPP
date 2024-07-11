/******************************************************************************

WAP for Reverse Array. 

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

void reverse(int array[],int size)
{
   int start = 0;
   int end = size - 1;
   
   while(start<=end)
   {
       swap(array[start],array[end]);
       
       start++;
       end--;
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
   reverse(even_array,6);
   printArray(even_array,6);
   
   cout<<"\nBefore Reverse Odd Array :";
   printArray(odd_array,5);
   cout<<"\nAfter Reverse Odd Array :";
   reverse(odd_array,5);
   printArray(odd_array,5);
 
    return 0;
}