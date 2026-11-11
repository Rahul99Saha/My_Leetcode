class Solution {
public:
    int solve(int n,vector<int>& costs,vector<int>& dp){
        if(n == 0) return 0;
        if(n < 0) return 1e9;
        if(dp[n]!=-1) return dp[n];
        int one = 1 + solve(n-1,costs,dp);
        int two = 4 + solve(n-2,costs,dp);
        int three = 9 + solve(n-3,costs,dp);
        return dp[n] = costs[n-1] + min({one,two,three});
    }
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
        for (int i = 1; i <= n; i++) solve(i, costs, dp);

        return dp[n];
    }
};
