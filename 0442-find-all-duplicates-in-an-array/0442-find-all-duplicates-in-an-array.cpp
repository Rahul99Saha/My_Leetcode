class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]>1)
            ans.push_back(i);
        }
        return ans;
    }
};