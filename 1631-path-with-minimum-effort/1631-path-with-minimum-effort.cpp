class Solution {
private : 
    void dfs(vector<vector<int>>& heights,int k,int x ,int y,vector<vector<int>> & visited){
        visited[x][y] = 1;
        int n = heights.size();
        int m = heights[0].size();
        int drow[4] = {0,0,1,-1};
        int dcol[4] = {1,-1,0,0};
        for(int i = 0;i<4;i++){
            int nrow = x + drow[i];
            int ncol = y + dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visited[nrow][ncol] && abs(heights[nrow][ncol]-heights[x][y])<= k){
                dfs(heights,k,nrow,ncol,visited);
            }
        }
    }
private:
    bool check(vector<vector<int>>& heights,int k){
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        visited[0][0] = 1;
        dfs(heights,k,0,0,visited);
        return visited[n - 1][m - 1];
    }
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int low = 0;
        int high = 1e6;
        int ans = high;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(heights,mid)){
                high = mid-1;
                ans = mid;
            }
            else
                low = mid +1;
        }
        return ans;
    }
};