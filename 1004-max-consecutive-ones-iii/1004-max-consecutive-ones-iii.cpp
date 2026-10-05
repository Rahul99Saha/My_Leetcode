class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // [1,1,1,0,0,0,1,1,1,1,0]
        // [1,1,1,0,0,1,1,1,1,1,1]
        int l = 0;
        int r = 0;
        int maxi = 0;
        int n = nums.size();
        int zeros = 0;
        while(r<n){
            if(nums[r] == 0){
                zeros++;
            }
            while(zeros > k){
                if(nums[l] == 0)
                    zeros--;
                l++;
            }
            maxi = max(maxi,r-l+1); 
            r++;
        }
        return maxi;
    }
};