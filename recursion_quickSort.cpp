/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr,int s,int e)
{
	int pivot = arr[s];
	int count = 0;

	for(int i=s+1; i<=e; i++)
	{
		if(arr[i] < pivot)
		{
			count++;
		}
	}

	int pivotindex = s+count;
	swap(arr[s], arr[pivotindex]);

	int i=s;
	int j=e;

	while(i < pivotindex && j > pivotindex)
	{
		while(arr[i] <= pivot)
		{
			i++;
		}
		while(arr[j] > pivot)
		{
			j--;
		}

		if(i < pivotindex && j > pivotindex)
		{
			swap(arr[i++], arr[j--]);
		}

	}

	return pivotindex;
}

void quick_sort(int arr[],int s,int e)
{
	if(s >= e)
	{
		return;
	}

	int p = partition(arr,s,e);

	quick_sort(arr,s,p-1);
	quick_sort(arr,p+1,e);

}

int main()
{
	int arr[] = { 5,4,3,2,1 };
	int n=5;
	quick_sort(arr,0,n-1);

	for(int i=0; i<n; i++)
	{
		cout<<arr[i];
	}

	return 0;
}