class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans;
        int minVal = INT_MAX; int maxVal = INT_MIN;
        for(int n : nums) {
            minVal = min(minVal,n);
            maxVal = max(maxVal,n);
        }
        ans = maxVal-minVal;

        return ans*k;
    }
};