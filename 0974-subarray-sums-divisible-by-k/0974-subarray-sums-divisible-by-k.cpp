class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // [4,5,0,-2,-3,1] , k = 5
        int count = 0;
        unordered_map<int,int>mp;
        int n = nums.size();
        int sum = 0;
        mp[0] = 1;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            int val = (sum % k + k) % k;
            if(mp.find(val) != mp.end()){
                count+=mp[val];
            }
            mp[val]++;
        }
        return count;
    }
};