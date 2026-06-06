class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int left = 0;
        int right = 0;
        vector<int>ans(n,0);
        vector<int>right_sum(n);
        for(int i = n-1;i>=0;i--){
            right_sum[i]=right;
            right+=nums[i];
        }
        for(int i = 0;i<n;i++){
            ans[i] = abs(left-right_sum[i]);
            left+=nums[i];
        }
        return ans;
    }
};