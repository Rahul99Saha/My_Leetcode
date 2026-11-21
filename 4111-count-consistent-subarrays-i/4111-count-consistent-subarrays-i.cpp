class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int store = -1;
            int mini = INT_MAX;
            for(int j = i;j<n;j++){
                store = store & nums[j];
                mini = min(mini,nums[j]);
                if(mini == store)
                    count++;
            }
        }
        return count;
    }
};