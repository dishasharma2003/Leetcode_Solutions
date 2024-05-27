#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    void BFS(int row, int column, vector<vector<char>>& grid, vector<vector<int>>& visited) {
        visited[row][column] = 1;
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        q.push({row, column});
        vector<pair<int,int>>directions={{-1,0},{1,0},{0,-1},{0,1}};
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
                for(auto dir:directions) {
                    int neigh_row = r + dir.first;
                    int neigh_col = c + dir.second;
                    if ((neigh_row >= 0 && neigh_row < n) && (neigh_col >= 0 && neigh_col < m) && (grid[neigh_row][neigh_col] == '1') && !visited[neigh_row][neigh_col]) {
                        visited[neigh_row][neigh_col] = 1;
                        q.push({neigh_row, neigh_col});
                    }
                
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    BFS(i, j, grid, visited);
                    count++;
                }
            }
        }
        return count;       
    }
};
