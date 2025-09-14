#include<iostream>
#include<vector>
using namespace std;

int n;
class Solution {
  public:
    bool isSafe(int row, int col, vector<vector<int>>&maze, vector<vector<int>>&visited){
        return (row < n && col < n && row >= 0 && col >= 0 && visited[row][col] == 0 && maze[row][col] == 1);
    }

    void solve(int row, int col, vector<vector<int>>&maze, vector<string>&ans,string path, vector<vector<int>>&visited){
        if(row == n-1 && col == n-1){
          ans.push_back(path);
          return;
        }

        visited[row][col] = 1;
        if (isSafe(row+1, col, maze, visited))
        {
          solve(row+1, col, maze, ans, path+'D', visited);
        }
        if (isSafe(row, col+1, maze, visited))
        {
          solve(row, col+1, maze, ans, path+'R', visited);
        }
        if (isSafe(row-1, col, maze, visited))
        {
          solve(row-1, col, maze, ans, path+'U', visited);
        }
        if (isSafe(row, col-1, maze, visited))
        {
          solve(row, col-1, maze, ans, path+'L', visited);
        }

        visited[row][col] = 0;
        
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        if(maze[0][0] = 0){
          return ans;
        }
        vector<vector<int>>visited(n, (vector<int>(n, 0)));
        solve(0, 0, maze, ans,"", visited);
        return ans;
    }
};

int main(){
    vector<vector<int>> maze = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    n = maze.size();
    Solution obj;
    vector<string>arr = obj.ratInMaze(maze);
    for (string &path : arr) {
        cout << path << " ";
    }
    
}