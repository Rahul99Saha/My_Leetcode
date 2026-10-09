class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        vector<int>ans;
        int n = nums2.size();
        for(int i = n-1;i>=0;i--){
            int x = nums2[i];
            while(!st.empty() && st.top()<=x){
                st.pop();
            }
            if(st.empty())
                mp[x] = -1;
            else
                mp[x] = st.top();
            st.push(x);
        }
        for(int i = 0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};