class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // strs = ["eat","tea","tan","ate","nat","bat"]
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i = 0;i<strs.size();i++){
            string word = strs[i];
            string temp = word;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(word) ;
        }

        for(auto m:mp){
            ans.push_back(m.second);
        }
        return ans;
    }
};