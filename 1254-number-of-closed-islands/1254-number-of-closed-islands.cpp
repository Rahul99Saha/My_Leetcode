class Solution {
public:
    void dfs(vector<vector<int>>& grid,int row,int col,vector<vector<int>>& visited){
        visited[row][col] = 1;
        int m = grid.size();
        int n  = grid[0].size();
        int drow[4] = {0,1,0,-1};
        int dcol[4] = {-1,0,1,0};
        for(int i = 0;i<4;i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol] == 0 &&!visited[nrow][ncol]){
                dfs(grid,nrow,ncol,visited);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n  = grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if((i == 0 || i == m-1 || j == 0 || j == n-1) && grid[i][j] == 0 && !visited[i][j]){
                    dfs(grid,i,j,visited);
                }
            }
        }
        int count = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i != 0 && i != m-1 && j != 0 && j != n-1 && grid[i][j] == 0 && !visited[i][j]){
                    dfs(grid,i,j,visited);
                    count++;
                }
            }
        }
        return count;
    }
};