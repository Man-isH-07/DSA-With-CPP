//Rat in a Maze Problem - I


//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  private:
    bool isSafe(vector<vector<int>> &mat,vector<vector<int>> visited,int x,int y,int n)
    {
        if((x >= 0 && x<n) && (x >= 0 && x<n) && (mat[x][y] == 1) && (visited[x][y] == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &mat,vector<string>& ans,vector<vector<int>> visited,
                string path,int x,int y,int n)
                {
                    if(x == n-1 && y == n-1)
                    {
                        ans.push_back(path);
                        return;
                    }
                    
                    visited[x][y]=1;
                    
                    //Down
                    int newx = x+1;
                    int newy = y;
                    if(isSafe(mat,visited,newx,newy,n))
                    {
                        visited[x][y]=1;
                        path.push_back('D');
                        solve(mat,ans,visited,path,newx,newy,n);
                        path.pop_back();
                    }
                    //Left
                    newx = x;
                    newy = y-1;
                    if(isSafe(mat,visited,newx,newy,n))
                    {
                        visited[x][y]=1;
                        path.push_back('L');
                        solve(mat,ans,visited,path,newx,newy,n);
                        path.pop_back();
                    }
                    //Right
                    newx = x;
                    newy = y+1;
                    if(isSafe(mat,visited,newx,newy,n))
                    {
                        visited[x][y]=1;
                        path.push_back('R');
                        solve(mat,ans,visited,path,newx,newy,n);
                        path.pop_back();
                    }
                    //Up
                    newx = x-1;
                    newy = y;
                    if(isSafe(mat,visited,newx,newy,n))
                    {
                        visited[x][y]=1;
                        path.push_back('U');
                        solve(mat,ans,visited,path,newx,newy,n);
                        path.pop_back();
                    }
                }
                
                
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int row = mat.size();
        int n = row;
        vector<vector<int>> visited =mat;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                visited[i][j] =0;
            }
        }
        
        vector<string> ans;
        int x=0;
        int y=0;
        
        if(mat[0][0] == 0)
        {
            return ans;
        }
        
        string path = "";
        solve(mat,ans,visited,path,x,y,n);
        
        sort(ans.begin(), ans.end());
        
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends