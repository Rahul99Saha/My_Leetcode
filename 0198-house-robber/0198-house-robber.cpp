class Solution {
public:
    int fun(int n, vector<int>& nums,vector<int>& dp){
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[1],nums[0]);
        if(dp[n-1]!=-1) return dp[n-1];
        return dp[n-1] = max(fun(n-2,nums,dp)+ nums[n-1],fun(n-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>dp(n,-1);   
        return fun(n,nums,dp);
    }
};