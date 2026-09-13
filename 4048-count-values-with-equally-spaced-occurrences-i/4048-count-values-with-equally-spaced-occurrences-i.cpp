class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i <nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto m:mp){
            int val = m.first;
            vector<int>arr = m.second;
            if(arr.size() == 3){
                int f=arr[0];
                int s = arr[1];
                int t =arr[2];
                if(s-f == t-s)
                    count++;
            }
        }
        return count;
    }
};