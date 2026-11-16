class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k){
            int sum = 0;
            int count = 0;
            string str = "";
            for(int i = 0;i<s.size();i++){
                sum += s[i] - '0';
                count++;
                if(k == count || i == s.size() - 1){
                    str = str + to_string(sum);
                    sum = 0;
                    count = 0;
                }
            }
            s = str;
        }
        return s;
    }
};