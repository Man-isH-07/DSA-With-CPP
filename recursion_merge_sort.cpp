/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e)
{
    int mid = (s+e)/2;
    
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    int *f1 = new int[len1];
    int *s2 = new int[len2];
    
    int mainindex = s;
    for(int i=0;i<len1;i++)
    {
        f1[i] = arr[mainindex++]; 
    }
    
    int k = mid+1;
    for(int i=0;i<len2;i++)
    {
        s2[i] = arr[k++]; 
    }
    
    
    int index1=0;
    int index2=0;
    mainindex = s;
    
    while(index1 < len1 && index2 < len2)
    {
        if(f1[index1] < s2[index2])
        {
            arr[mainindex++] = f1[index1++];
        }
        else
        {
            arr[mainindex++] = s2[index2++];
        }
    }
    
    while(index1 < len1)
    {
        arr[mainindex++] = f1[index1++];
    }
    
    while(index2 < len2)
    {
        arr[mainindex++] = s2[index2++];
    }
    
    delete []f1;
    delete []s2;
}

void sort_merge(int arr[],int s,int e)
{
   if(s >= e)
   {
       return;
   }
   
   int mid = (s+e)/2;
   
   sort_merge(arr,s,mid);
   sort_merge(arr,mid+1,e);
   
   merge(arr,s,e);

}

int main()
{
    int arr[] = { 5,4,3,2,1 };
    int n=5;
    sort_merge(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}