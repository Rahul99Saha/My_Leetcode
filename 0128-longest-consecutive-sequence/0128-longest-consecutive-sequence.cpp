class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int maxi = 0;

        for(int num : st) {

            if(st.find(num - 1) == st.end()) {

                int count = 1;
                int next = num + 1;

                while(st.find(next) != st.end()) {
                    count++;
                    next++;
                }

                maxi = max(maxi, count);
            }
        }

        return maxi;
    }
};