class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // [1,1,1,0,0,0,1,1,1,1,0]
        int n = nums.size();
        int i = 0;
        int count_zero = 0;
        int j = 0;
        int maxi = 0;
        while(j<n){
            if(nums[j]==0){
                count_zero++;
            }
            while(count_zero > k){
                if(nums[i]==0)
                    count_zero--;
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};