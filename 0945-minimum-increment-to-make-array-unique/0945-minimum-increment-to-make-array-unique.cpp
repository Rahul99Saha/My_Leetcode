class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) 
    {
        int i = 1;
        int move = 0;
        int n = nums.size(); 
        sort(nums.begin(),nums.end()); 
        while(i < n)
        {
            if(nums[i] <= nums[i-1])
            {
                move += (nums[i-1] - nums[i] + 1);
                nums[i]=nums[i-1]+1;
            }
            i++;
        }
        return move;
    }
};