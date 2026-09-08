class Solution {
public:
    bool find_partition(vector<int>& nums,int target,int index, vector<vector<int>>& dp){
        int n = nums.size();
        if(target == 0) return true;
        if(index == n || target < 0) return false;
        if(dp[index][target]!=-1) return dp[index][target];
        bool take = find_partition(nums, target-nums[index], index+1,dp);
        bool nottake = find_partition(nums, target,index+1,dp);
        return dp[index][target] = take||nottake;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int target = 0;
        for(int i:nums){
            target+=i;
        }
        if(target%2 == 1) return false;
        target/=2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return find_partition(nums,target,0,dp);
    }
};