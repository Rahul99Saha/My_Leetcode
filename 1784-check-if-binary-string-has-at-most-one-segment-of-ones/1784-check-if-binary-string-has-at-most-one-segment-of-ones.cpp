class Solution {
public:
    bool checkOnesSegment(string s) {
        int k=0;  
        for(int i=1;i<s.size();i++){
            if(s[i]=='1')
                continue;
            else{
                k=i;
                break;
            }
        }
        if(k==0)
        return true;
        else{
            for(int i=k+1;i<s.size();i++)
            {
                if(s[i]=='1')
                {
                    return false;
                }
            }
            return true;
        }
    }
};