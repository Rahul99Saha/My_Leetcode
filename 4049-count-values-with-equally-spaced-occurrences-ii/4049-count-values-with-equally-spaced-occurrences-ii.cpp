class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        unordered_map<int,vector<int>>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto m:mp){
            vector<int>arr = m.second;
            if(arr.size() >= 3){
                int flag = 0;
                int d = arr[1]-arr[0];
                for(int j = 1;j < arr.size()-1;j++){
                    if(arr[j+1]-arr[j] != d){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    count++;
            }
        }
        return count;
    }
};