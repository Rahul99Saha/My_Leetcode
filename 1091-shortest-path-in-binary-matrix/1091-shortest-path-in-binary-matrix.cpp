class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if (grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;
        
        if(grid.size()==1) return 1;
        vector<vector<int>>dist(n,vector<int>(n,1e9));
        dist[0][0]=1;
        queue<pair<int,pair<int,int>>>q;
        q.push({1,{0,0}});

        int dx[] = {-1,-1,0,1,1,1,0,-1};
        int dy[] = {0,1,1,1,0,-1,-1,-1};
        while(!q.empty()){
            int dis = q.front().first;
            int r = q.front().second.first;
            int c = q.front().second.second;
            q.pop();

            for(int i=0;i<8;i++){
                int newr = r + dx[i];
                int newc = c + dy[i];

                if(newr>=0 && newc >= 0 && newr < n && newc < n && grid[newr][newc]==0 && dist[newr][newc] > dis +1){
                    if(newr == n-1 && newc ==n-1) return dis+1;
                    dist[newr][newc]= dis +1;
                    q.push({dis+1,{newr,newc}});
                }
            }
        }
        return -1;
    }
};