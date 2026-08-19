class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int>mp;
        int i = 0;
        int j = 0;
        int maxi = 0;
        int maxFreq = 0;
        int count = 0;
        int n = s.size();
        for(int j = 0;j<n;j++){
            mp[s[j]]++;
            maxFreq = max(maxFreq, mp[s[j]]);
            count = j - i + 1 - maxFreq;
            while(count > k){
                mp[s[i]]--;
                if(mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
                count = j - i + 1 - maxFreq;
            }
            maxi = max(maxi,j-i+1);
        }
        return maxi;
    }
};