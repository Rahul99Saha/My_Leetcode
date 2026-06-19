class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = INT_MIN;
        int sum = 0;
        for(int i = 0;i<gain.size();i++){
            ans = max(ans,sum);
            sum = sum + gain[i];
        }
        ans = max(sum,ans);
        return ans;
    }
};