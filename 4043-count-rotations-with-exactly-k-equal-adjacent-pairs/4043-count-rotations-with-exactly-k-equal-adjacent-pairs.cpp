class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int count = 0;
        int score;
        s = s + s;
        string s1 = "";
        for(int i = 0;i<n;i++){
            s1 = s.substr(i,n);
            score = 0;
            // cout<<s1<<endl;
            for(int j =0;j<s1.size()-1;j++){
                if(s1[j]==s1[j+1])
                    score++;
            }
            // cout<<score<<endl;
            if(score == k)
                count++;
        }
        return count;
    }
};