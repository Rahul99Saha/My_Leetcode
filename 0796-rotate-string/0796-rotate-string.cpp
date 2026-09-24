class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        char c = s[0];
        string str = "";
        for(int i = 0;i<goal.size();i++){
            if(goal[i] == c){
                str = goal.substr(i)+goal.substr(0,i);
                if(str == s)
                    return true;
            }
        }
        return false;

    }
};