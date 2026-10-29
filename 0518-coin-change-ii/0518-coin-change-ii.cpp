class Solution {
public:
    int solve(int index,vector<int>& coins, int amount,vector<vector<int>>& dp){
        int n = coins.size();
        if(amount == 0) return 1;
        if(index == n || amount < 0) return 0;
        if(dp[index][amount]!=-1) return dp[index][amount];
        int move = solve(index+1,coins,amount,dp);
        int stay = solve(index,coins,amount-coins[index],dp);
        return dp[index][amount] = move + stay;
    }
    int change(int amount,vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return solve(0,coins,amount,dp);
    }
};