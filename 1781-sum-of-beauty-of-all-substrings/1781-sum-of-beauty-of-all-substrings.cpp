class Solution {
public:
    int calculate(string str){
        int freq[26] = {0};
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < str.size(); i++) {
            freq[str[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                mini = min(mini, freq[i]);
                maxi = max(maxi, freq[i]);
            }
        }
        return maxi-mini;    
    }
    int beautySum(string s) {
        //abaacc
        int n = s.size();
        int ans = 0;
        string str = "";
        for(int i = 0;i<n;i++){
            int freq[26] = {0};
            for(int j = i;j<n;j++){
                freq[s[j]-'a']++;
                int maxi = 0;
                int mini = INT_MAX;
                for(int k = 0;k<26;k++){
                    if(freq[k]>0){
                        maxi = max(maxi,freq[k]);
                        mini = min(mini,freq[k]);
                    }
                }
                ans+=maxi-mini;
            }
        }
        return ans;  
    }
};