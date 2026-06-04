class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //nums1 = [4,1,2], nums2 = [1,3,4,2].  2
        //Output: [-1,3,-1]t
        stack<int>st;
        vector<int>store;
        unordered_map<int,int>mp;
        int n =nums1.size();
        int m = nums2.size();
        int j=0;
        for(int i =m-1;i>=0;i--){
            while(!st.empty() && st.top()<nums2[i])
            {
                st.pop();
            } 
            if(st.empty())
                mp[nums2[i]]= -1;
            else
                mp[nums2[i]]= st.top();
            st.push(nums2[i]);
        }

        for(int i = 0;i<n;i++){

            store.push_back(mp[nums1[i]]);
        }
        return store;
    }
};