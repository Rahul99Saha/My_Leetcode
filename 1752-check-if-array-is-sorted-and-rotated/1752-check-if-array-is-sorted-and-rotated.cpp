class Solution {
public:
    bool check(vector<int>& nums) {
        // nums = [3,4,5,1,2]
        // B[i] == A[(i+x) % A.length]
        int n = nums.size();
        int p = 0;
        for(int i = n-1;i>0;i--){
            if(nums[i-1] > nums[i])
            {
                p=i;
                break;
            }
        }
        for(int i=p;i<p+n-1;i++){
            if (nums[i%n] > nums[(i+1) % n]){
                return false;
            }
        }
        return true;
    }
};