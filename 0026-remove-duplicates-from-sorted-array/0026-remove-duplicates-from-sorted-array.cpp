class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    { 
        int c=0;
        int i = 1;
        for(int j=i;j<nums.size();j++)
        {
            if(nums[j]!=nums[i-1])
            {
                nums[i++]=nums[j];
            }
        }
        return i;
    }
};