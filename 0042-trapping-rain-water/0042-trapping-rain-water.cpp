class Solution {
public:
// [0,1,0,2,1,0,1,3,2,1,2,1]
// [0,1,1,2,2,2,2,3,3,3.3.3]
// [3 3 3 3 3 3 3 3 2 2 2 1]
// [0 1 1 2 2 2 2 3 2 2 2 1]
// [0,0,1,0,1,2,1,0,0,1,0,0] - sum = 6

// [0,1,0,2,1,0,1,3,2,1,2,1]
//leftMax = 2  righMax =2 - i=3,j=n-2
// ans += min(leftMax,righMax) - nums(pos)
    int trap(vector<int>& height) {
        int ans = 0;
        int n =height.size();
        int leftmax[n];
        int rightmax[n];
        leftmax[0]=height[0];
        rightmax[n-1]=height[n-1];
        for(int i = 1;i<n;i++){
            leftmax[i] = max(height[i],leftmax[i-1]);
        }
        for(int i = n-2;i>=0;i--){
            rightmax[i] = max(height[i],rightmax[i+1]);
        }
        for(int i = 0;i<n;i++){
            ans+=min(leftmax[i],rightmax[i])-height[i];
        }
        return ans;
    }
};