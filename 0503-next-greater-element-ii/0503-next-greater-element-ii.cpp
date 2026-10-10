class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>temp(nums.begin(),nums.end());
        int n = nums.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i = 0;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        for(int i = 2*n-1;i>=0;i--){
            int x = temp[i];
            while(!st.empty() && st.top()<=x){
                st.pop();
            }
            if(i<n && !st.empty()){
                ans[i] = st.top();
            }
            st.push(x);
        }
        return ans;
    }
};