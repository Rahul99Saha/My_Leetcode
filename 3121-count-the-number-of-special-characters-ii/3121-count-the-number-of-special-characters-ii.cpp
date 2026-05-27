class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lower[26]={0};
        int upper[26]={0};
        int c = 0;
        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];
            if(ch>='a' && ch<='z'){
                if(upper[ch-'a']!=0){
                    lower[ch-'a']=-1;
                }
                else if(lower[ch-'a'] == 0)
                {
                    lower[ch-'a']=i+1;
                }

            }
            else if(ch>='A' && ch<='Z') 
            {
                    upper[ch-'A']=i+1;
            }      
        }
        for(int i=0;i<26;i++){
            if(lower[i]>0 && upper[i]>0 && lower[i] < upper[i])
                c++;
        }
        return c;
    }
};