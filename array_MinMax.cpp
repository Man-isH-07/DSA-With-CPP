/******************************************************************************

WAP to find MinMax of an array .

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

void MaxArray(int array[],int size)
{
    int max = array[0];
    
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    
    cout<<"Maximum Element is : "<<max<<endl;
}

void MinArray(int array[],int size)
{
    int min = array[0];
    
    for(int i=0;i<size;i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
    }
    
    cout<<"Minimum Element is : "<<min<<endl;
}

int main()
{
   int array[100];
   int size;
   //taking array input 
   
   cout<<"Input the size of array : ";
   cin>>size;
   
   cout<<"enter "<<size<<" elements of your array : \n";
   
   for(int i=0;i<size;i++)
   {
       cin>>array[i];
   }
   
    MaxArray(array,size);
    
    MinArray(array,size);
    
    return 0;
}