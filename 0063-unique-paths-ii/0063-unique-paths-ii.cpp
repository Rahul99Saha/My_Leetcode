class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int mod = (int) 2 * 1e9;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        dp[0][0]=1;
        for(int i = 0;i<m;i++){
            for(int j= 0;j<n;j++){
                if(obstacleGrid[i][j] == 1)
                    dp[i][j] = 0;
                else if(i > 0 || j > 0){
                    int up = 0,down = 0;
                    if(i>0)  
                        up = dp[i-1][j];
                    if(j>0)  
                        down = dp[i][j-1];
                    dp[i][j] = up+down;
                }
                else if(i == 0 && j == 0)
                    dp[i][j] = 1;
            }
        }
        return dp[m-1][n-1];
    }
};