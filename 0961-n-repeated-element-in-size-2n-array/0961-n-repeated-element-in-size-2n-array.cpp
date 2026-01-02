class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        int n = nums.size()/2;
        int c = 0;
        int p = 0;
        for(int i = 0;i < nums.size();i++)
        {
            c = 0;
            for(int j = i;j < nums.size();j++){
                if(nums[i]==nums[j])
                    c++;
            }
            if(c == n)
            {
                p=i;
                break;
            }
        }
        return nums[p];
    }
};