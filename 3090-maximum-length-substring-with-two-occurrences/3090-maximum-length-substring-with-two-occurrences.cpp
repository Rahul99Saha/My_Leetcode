class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>mp(26,0);
        // bcbbbcba
        int n = s.size();
        int i=0;
        int j= 0;
        int maxi = 0;
        while(j < n){
            char ch = s[j];
            mp[ch-'a']++;
            while (mp[s[j] - 'a'] > 2) {
                mp[s[i] - 'a']--;
                i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};