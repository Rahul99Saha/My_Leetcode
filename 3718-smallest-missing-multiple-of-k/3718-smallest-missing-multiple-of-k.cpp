class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans = 0;
        int multi = k;
        while(st.find(multi)!=st.end()){
            ans = multi;
            multi+=k;
        }
        return multi;
    }
};