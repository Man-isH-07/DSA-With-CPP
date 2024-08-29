//74. Search a 2D Matrix


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        int start =0;
        int end = (rows*cols -1);

        int mid = (start+end)/2;
        while(start <= end)
        {
            int element = matrix[mid/cols][mid%cols]; // ***

            if(element == target)
            {
                return 1;
            }
            else if(element > target)
            {
                end =mid-1;
            }
            else
            {
                start = mid+1;
            }

            mid = (start+end)/2;
        }

        return 0;
    }
};