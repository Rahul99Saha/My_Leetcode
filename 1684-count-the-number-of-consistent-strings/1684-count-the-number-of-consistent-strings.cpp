class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int mp[26]={0};
        for(int i=0;i<allowed.size();i++)
        {
            char ch=allowed[i];
            mp[ch-'a']++;
        }
        int count = 0;
        int flag;
        for(int i=0;i<words.size();i++)
        {
            flag=1;
            for(int j=0;j<words[i].size();j++)
            {
                char ch2=words[i][j];
                if(mp[ch2-'a'] == 0)
                {
                    flag=0;
                    break;
                }
            }
            count+=flag;
        }
        return count; 
    }
};