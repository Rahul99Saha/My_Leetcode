class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int dis = 0;
        vector<vector<int>>visited(n,vector<int>(n,0));
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;
        if(n==1) return 1;
        visited[0][0] = 1;
        queue<pair<int,int>>q;
        q.push({0,0});
        while(!q.empty()){
            int s = q.size();
            dis++;
            for(int i = 0;i<s;i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int row = -1;row<=1;row++){
                    for(int col = -1;col<=1;col++){
                        int nrow = x + row;
                        int ncol = y + col;
                        if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && !visited[nrow][ncol] && grid[nrow][ncol] == 0){
                            visited[nrow][ncol] = 1;
                            q.push({nrow,ncol});
                            if(nrow ==n-1 && ncol == n-1) 
                                return dis+1;
                        }
                    }
                }
            }
        }
        return -1;
    }
};