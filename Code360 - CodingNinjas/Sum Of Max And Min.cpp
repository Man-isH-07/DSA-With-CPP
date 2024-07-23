/* Sum Of Max And Min

Problem statement
You are given an array “ARR” of size N. Your task is to find out the sum of maximum and minimum elements in the array.
*/


#include <bits/stdc++.h> 

int findMax(int arr[],int n)
{
	int max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}

	return max;
}
int findMin(int arr[],int n)
{
	int min = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	
	int ans = findMax(arr,n) + findMin(arr,n);
	return ans;

}