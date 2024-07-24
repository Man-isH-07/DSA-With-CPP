/*Binary Search

Problem statement
You are given an integer array 'A' of size 'N', sorted in non-decreasing order. You are also given an integer 'target'. Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. If 'target' is not present in the array 'A', return -1.

Note:
You must write an algorithm whose time complexity is O(LogN)

*/

int search(vector<int> &nums, int target) {
    // Write your code here.
    int beg =0;
    int end=nums.size()-1;
    int mid = (beg+end)/2;
    while(beg<=end)
    {
        if(nums[mid] == target)
        {
        return mid;
        }
        if(nums[mid]<target)
        {
            beg=mid+1;
        }
        else{ end=mid-1; }

        mid = (beg+end)/2;
    }

    return -1;
}