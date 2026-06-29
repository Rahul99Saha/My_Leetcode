class Solution {
private:
    void bfs(int m,int n,vector<vector<int>> &visited, vector<vector<char>>& grid,int rowsize,int colsize){
        queue<pair<int,int>>q;
        q.push({m, n});
        visited[m][n]=1;
        while(!q.empty()){
            int m = q.front().first;//rows
            int n = q.front().second;//col
            q.pop();
            int delrow[] = {-1, 0, 1, 0};
            int delcol[] = {0, 1, 0, -1};
            for(int i = 0;i<4;i++){
                int nrow = m + delrow[i];
                int ncol = n + delcol[i];
                if(nrow>=0 && nrow<rowsize && ncol>=0 && ncol<colsize && grid[nrow][ncol]=='1' && !visited[nrow][ncol]){
                    visited[nrow][ncol]=1;
                    q.push({nrow,ncol});
                    }
                }
            }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(m,vector<int>(n,0)); 
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    count++;
                    bfs(i,j,visited,grid,m,n);
                }
            }
        }
        return count;
    }
};