/******************************************************************************

WAP for Linear Search .

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;

void LinearSearch(int array[],int size,int key)
{
    bool status = false;
    
    for(int i=0;i<size;i++)
    {
       if(array[i] == key)
       {
           status=true;
           break;
       }
       
    }
    
    if(status)
    {
        cout<<"Key Found";
    }
    else
    {
        cout<<"Key Not Found";
    }
    
    
}

int main()
{
   int array[100];
   int size;
   int key;
   //taking array input 
   
   cout<<"Input the size of array : ";
   cin>>size;
   
   cout<<"enter "<<size<<" elements of your array : \n";
   
   for(int i=0;i<size;i++)
   {
       cin>>array[i];
   }
   
   cout<<"Enter Key Value which you want to find : ";
   cin>>key;
   
    LinearSearch(array,size,key);
    
 
    return 0;
}