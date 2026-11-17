class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        // nums = [3, -2, 1, 4] , l = 2, r = 3
        int sum = 0;
        int min_pos = INT_MAX;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                sum = sum + nums[j];
                int len = j - i + 1;  
                if(len >= l && len <=r && sum>0){
                    min_pos = min(min_pos,sum);
                }
            }
            sum = 0;
        }
        return (min_pos == INT_MAX) ? -1: min_pos;
    }
};