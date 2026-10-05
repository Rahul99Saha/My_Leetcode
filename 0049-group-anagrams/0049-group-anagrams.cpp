class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // strs = ["eat","tea","tan","ate","nat","bat"]
        // abcde -> 1 1 1 1 1 0 0 0 0 00 ...
        //eat - > 1 0 0 0 1 00000000000001 .....
        //aet -> eat, 
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i = 0;i<strs.size();i++){
            string word = strs[i];
            string temp = "";
            // sort(temp.begin(),temp.end());
            int freq[26]={0};
            for(int i = 0;i<word.size();i++){
                freq[word[i] - 'a']++;
            }
            for(int i = 0;i<26;i++){
                while(freq[i] > 0){
                    temp += char(i+'a');
                    freq[i]--;
                }
            }
            mp[temp].push_back(word) ;
        }

        for(auto m:mp){
            ans.push_back(m.second);
        }
        return ans;
    }
};