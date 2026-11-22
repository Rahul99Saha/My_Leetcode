class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        bool seenb = false;
        for(int i = 0;i<n;i++){
            if(s[i] == 'a' && seenb == true) 
                return false;
            if(s[i] == 'b') 
                seenb = true;
        }
        return true;
    }
};