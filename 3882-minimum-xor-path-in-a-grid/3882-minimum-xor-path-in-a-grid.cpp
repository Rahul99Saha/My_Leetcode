class Solution {
public:
    int calculate(int i ,int j,int val,vector<vector<int>>& grid,vector<vector<vector<int>>>& dp){
        if(i <0 || j < 0) return 1e9;
        val^=grid[i][j];
        if(i == 0 && j  == 0) return val;
        if(dp[i][j][val]!=-1) return dp[i][j][val];
        int up = calculate(i-1,j,val,grid,dp);
        int left =calculate(i,j-1,val,grid,dp);
        return dp[i][j][val] = min(left,up);
    }
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(1024,-1)));
        return calculate(m-1,n-1,0,grid,dp);
    }
};