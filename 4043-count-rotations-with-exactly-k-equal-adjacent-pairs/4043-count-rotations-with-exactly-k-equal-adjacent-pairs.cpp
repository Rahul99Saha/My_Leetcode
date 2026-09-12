class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int count = 0;
        int score;
        for(int i = 0;i<n;i++){
            score = 0;
            for(int j =i;j<i+n-1;j++){
                if(s[j%n]==s[(j+1)%n])
                    score++;
            }
            if(score == k)
                count++;
        }
        return count;
    }
};