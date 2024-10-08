//54. Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row = matrix.size();
        int column = matrix[0].size();

        int total = row*column;
        int count =1;

        int startRow = 0;
        int endRow =row -1;
        int startCol = 0;
        int endCol = column -1;

        while(count <= total)
        {
            for(int i=startCol;i<=endCol && count <= total;i++)
            {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            for(int i=startRow;count <= total && i<=endRow;i++)
            {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            for(int i=endCol;count <= total && i>=startCol;i--)
            {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            for(int i=endRow;count <= total && i>=startRow;i--)
            {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        
        return ans;
    }


};