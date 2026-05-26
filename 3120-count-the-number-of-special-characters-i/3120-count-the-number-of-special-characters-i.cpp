class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lower[26]={0};
        int upper[26]={0};
        int count = 0;
        for(int i=0;i<word.size();i++)
        {
            int ch = word[i];
            if(ch >= 'a' && ch <= 'z')
            {
                lower[ch-'a']++;
            }
            else if(ch >='A' && ch <='Z')
            {
                upper[ch-'A']++;
            }
        }
        for(int i=0;i<26;i++){
            if(lower[i]!=0 && upper[i]!=0)
            count++;
        }
        return count;
    }
};