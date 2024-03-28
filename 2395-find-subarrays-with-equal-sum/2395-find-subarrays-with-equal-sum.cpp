class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            sum=nums[i]+nums[i+1];
            mp[sum]++;
            if(mp[sum]>1)
            return true;
            sum=0;
        }
        return false;
    }
};