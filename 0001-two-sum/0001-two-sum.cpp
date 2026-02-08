class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>>arr;
        for(int i = 0;i<n;i++)
        {
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int i = 0;
        int j = n-1;
        int sum = 0;
        while(i<j)
        {
            sum = arr[i].first + arr[j].first;
            if(sum==target){
                return{arr[i].second,arr[j].second};
                break;
            }
            else if(sum>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {};
    }
};