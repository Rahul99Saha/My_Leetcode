class Solution {
public:
// [0,1,0,2,1,0,1,3,2,1,2,1]
//leftMax = 2  righMax =2 - i=3,j=n-2
// ans += min(leftMax,righMax) - nums(pos)
    int trap(vector<int>& height) {
        int ans = 0;
        int n =height.size();
        int leftmax=0;
        int rightmax=0;
        int left = 0;
        int right = n-1;
        while(left<right)
        {
            leftmax = max(leftmax,height[left]);
            rightmax = max(rightmax,height[right]);
            if(leftmax<=rightmax){
                ans +=min(leftmax,rightmax)-height[left];
                left++;
            }
            else{
                ans +=min(leftmax,rightmax)-height[right];
                right--;
            }
        }
        return ans;
    }
};