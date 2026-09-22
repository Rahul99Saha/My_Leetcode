class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string first = strs[0];
        string ans = "";
        for(int j = 0;j<first.size();j++){
            for(int i = 1;i<strs.size();i++){
                if(j>=strs[i].size() || strs[i][j] != first[j]){
                   return ans;
                }
            }
            ans = ans + first[j];
        }
        return ans;
    }
};