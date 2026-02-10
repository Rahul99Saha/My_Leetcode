class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        //[2,0,2,1,1,0]
        //[0,0,2,1,1,2]
        int i = 0;
        int k=nums.size()-1;
        int j = i;
        while(j<=k)
        {
            if(nums[j]==0)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j]==2)
            {
                swap(nums[j],nums[k]);
                k--;
            }
            else
            {
                j++;
            }
        }
    }
};