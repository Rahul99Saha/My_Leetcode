class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        for(char c : t) {
            freq[c]++;
        }
        int count = 0;
        int l = 0;
        int r = 0;
        int mincount = INT_MAX;
        int start = 0;
        int n = s.size();
        while(r < n) {
            if(freq.find(s[r]) != freq.end()) {
                freq[s[r]]--;
                if(freq[s[r]] >= 0) {
                    count++;
                }
            }
            while(count == t.size()) {
                if(r - l + 1 < mincount) {
                    mincount = r - l + 1;
                    start = l;
                }
                if(freq.find(s[l]) != freq.end()) {
                    freq[s[l]]++;
                    if(freq[s[l]] > 0) {
                        count--;
                    }
                }
                l++;
            }
            r++;
        }
        if(mincount == INT_MAX)
            return "";
        return s.substr(start, mincount);
    }
};