class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum = 0;
        int min = INT_MAX;
        for(int i = 0; i<nums.size();i++){
            while(nums[i]!=0){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            if(sum < min)
                min = sum;
            sum = 0;
        }

        return min;
    }
};