/******************************************************************************

Basics Of Array .

*******************************************************************************/

#include <iostream>
using namespace std;

int printArray(int arr[] , int size)
{
    cout<<"Elements of array are : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}


int main()
{
    int arr[5]={1,2,3,4,5};
    
    int size = (sizeof(arr)/sizeof(int));
    cout<<"size of array is "<<size<<endl;
    printArray(arr , size);

    return 0;
}