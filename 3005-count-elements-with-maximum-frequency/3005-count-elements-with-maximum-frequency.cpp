class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        int maxi=0,c=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<mp.size();i++)
        {
            maxi=max(mp[i],maxi);
        }
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]==maxi)
            c++;
        }
        return (c*maxi);
    }
};