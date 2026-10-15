class Solution {
public:
    int sumCounts(vector<int>& nums) {
        //[1,2,1] 
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            unordered_map<int, int> mp;
            for(int j = i;j<n;j++){
                mp[nums[j]]++;
                int distinct = mp.size();
                sum+= distinct * distinct;
                }
            }
        return sum;
    }
};