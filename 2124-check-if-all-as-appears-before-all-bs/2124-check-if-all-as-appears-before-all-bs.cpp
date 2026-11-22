class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int p = -1;
        for(int i = 0;i<n;i++){
            if(s[i]=='b'){
                p = i;
                break;
            }
        }
        if(p == -1) return true;
        for(int i = p;i<n;i++){
            if(s[i] == 'a')
                return false;
        }
        return true;
    }
};