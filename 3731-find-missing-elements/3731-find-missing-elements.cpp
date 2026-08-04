class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int min = nums[0];
        int max = nums[n-1];
        int k = 1;
        for(int i = min+1;i<max;i++){
            if(k<n && i == nums[k]){
                k++;
            }
            else
            ans.push_back(i);
        }
        return ans;
    }
};