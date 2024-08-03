class Solution {
public:
//O(n^2) complexity
// using namespace std;
    int trap(vector<int>& height) 
    {
        int ans=0;
        int n=height.size();
        for(int i=1;i<n-1;i++)
        {
            int max_left=height[i];
            for(int j=0;j<i;j++)
            {
                max_left=max(max_left,height[j]);
            }
            int max_right=height[i];
            for(int j=i;j<n;j++)
            {
                max_right=max(max_right,height[j]);
            }
            ans=ans+min(max_right,max_left)-height[i];
        }
        return ans;    
    }
};