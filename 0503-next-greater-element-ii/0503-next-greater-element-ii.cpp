class Solution {
public:
//[100,1,11,1,120,111,123,1,-1,-100]
//[120,11,120,11,123,123,-1,11,100,100]
//[120,11,120,120,123,123,-1,100,100,100]

    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        
        unordered_map<int,int>mp;
        int n = nums.size();
        vector<int>store(2*n,-1);
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        for(int i =2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i])
            {
                st.pop();
            } 
            if(st.empty())
                store[i]=-1;
            else
                store[i] = st.top();
            st.push(nums[i]);
        }
        vector<int> ans(store.begin(), store.begin() + n);
        return ans ;
    }
};