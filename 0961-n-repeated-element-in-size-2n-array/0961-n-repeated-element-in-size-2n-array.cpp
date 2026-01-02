class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        int n = nums.size()/2;
        int p = 0;
        unordered_map<int, int> mp;
        for(int i = 0;i < nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i = 0; i < mp.size();i++)
        {
            if(mp[i]==n)
            {
                p=i;
                break;
            }
        }
        return p;
    }
};