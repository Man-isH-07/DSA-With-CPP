/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort_bubble(int arr[],int n)
{
    if(n==0 || n==1)
    {
        return;
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
    sort_bubble(arr,n-1);
}

int main()
{
    int arr[] = { 5,4,3,2,1 };
    int n=5;
    
    sort_bubble(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}