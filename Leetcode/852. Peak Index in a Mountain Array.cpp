/* 852. Peak Index in a Mountain Array
	
	You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity. ( Binary Search )
 */


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size() - 1;

        int mid = start + (end - start) / 2 ;

        while(start < end)
        {
            if(arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else 
            {
                end = mid;
            }

            mid = start + (end - start) / 2 ;
        } 

        return start;
        
    }
};