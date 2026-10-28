class Solution {
public:
    int solve(int index,vector<int>& coins, int amount,vector<vector<int>>& dp){
        int n = coins.size();
        if(amount == 0) return 0;
        if(index == n || amount < 0) return 1e9;
        if(dp[index][amount]!=-1) return dp[index][amount];
        int move = solve(index+1,coins,amount,dp);
        int stay = 1 + solve(index,coins,amount-coins[index],dp);
        return dp[index][amount] = min(move,stay);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans = solve(0,coins,amount,dp);
        return ans == 1e9?-1:ans;
    }
};