class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int min_sum = INT_MAX;
        vector<int>prefix(n+1,0);
        for(int i = 0;i<n;i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
        for(int i = 0;i<n;i++){
            int sum = 0;
            for(int len = l;len<=r && i+len<=n;len++){
                int sum = prefix[i+len] - prefix[i];
                if(sum > 0)
                    min_sum = min(min_sum,sum); 
            }
        }
        return (min_sum == INT_MAX)? -1 : min_sum;
    }
};