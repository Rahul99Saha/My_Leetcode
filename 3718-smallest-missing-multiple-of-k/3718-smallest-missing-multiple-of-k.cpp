class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st(nums.begin(),nums.end());
        int multi = k;
        while(st.find(multi)!=st.end()){
            multi+=k;
        }
        return multi;
    }
};