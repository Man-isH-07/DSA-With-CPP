/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort_selection(int arr[],int n)
{
    if(n==0 || n==1)
    {
        return;
    }
    
    int min = 0;
    
        for(int i=1;i<n;i++)
        {
        if(arr[min] > arr[i])
        {
            min = i;
        }
        }
    
    swap(arr[0],arr[min]);
    
    sort_selection(arr+1,n-1);
    
    
    
    
    
}

int main()
{
    int arr[] = { 5,4,3,2,1 };
    int n=5;
    int count =1;
    sort_selection(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}