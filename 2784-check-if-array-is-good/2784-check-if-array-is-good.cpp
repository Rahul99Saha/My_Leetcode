class Solution {
public:
    bool isGood(vector<int>& nums) {
        // [1, 2, 3, 3]
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<2)
        return false;
        for(int i = 0;i < n-1;i++){
            if(i+1!=nums[i])
                return false;
        }
        return nums[n-1]==nums[n-2];
    }
};