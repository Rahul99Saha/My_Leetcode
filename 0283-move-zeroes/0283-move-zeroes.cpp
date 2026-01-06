class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 1;
        int i = 0;
        int n =nums.size();
        while(j<n){
            if (i >= j) {
                j = i + 1;
                continue;
            }
            if(nums[i]==0 && nums[j]!=0)
            {
                nums[i]=nums[j];
                nums[j]=0;
                i++;
                j++;
            }
            else if(nums[i]!=0){
                i++;
            }
            else
            {
                j++;
            }
        }
    }
};