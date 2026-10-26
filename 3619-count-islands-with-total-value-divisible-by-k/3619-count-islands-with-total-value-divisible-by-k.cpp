class Solution {
public:
    long long dfs(vector<vector<int>>& grid,int row,int col,vector<vector<int>>& visited,long long sum){
        visited[row][col] = 1;
        sum = grid[row][col];
        int  m = grid.size();
        int n = grid[0].size();
        int drow[4] = {0,1,0,-1};
        int dcol[4] = {-1,0,1,0};
        for(int i = 0;i<4;i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]>0 &&!visited[nrow][ncol]){
                sum+=dfs(grid,nrow,ncol,visited,0);
            }
        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int count = 0;
        int  m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] > 0 && !visited[i][j]){
                    if(dfs(grid,i,j,visited,0) % k == 0)
                        count++;
                }
            }
        }
        return count;
    }
};