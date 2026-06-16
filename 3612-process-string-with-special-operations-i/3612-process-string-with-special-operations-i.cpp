class Solution {
public:
    string processStr(string s) {
        string result = "";
        for(int i = 0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z')
                result=result+s[i];
            else if(s[i]=='#')
                result = result + result;
            else if(s[i]=='%')
                reverse(result.begin(), result.end());
            else if(s[i]=='*'){
                if(!result.empty())
                    result.pop_back();   
            }           
        }
        return result;
    }
};