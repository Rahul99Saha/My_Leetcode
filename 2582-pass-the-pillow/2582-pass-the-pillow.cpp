class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n)
        return time+1;
        else if(time==n)
        return n-1;
        else
        {
            int completed = time / (n-1);
            int remaining = time % (n-1);
            int ans = 0;
            if (completed % 2 != 0) {
                ans = n - remaining;
            } else {
                ans = remaining + 1;
            }
            return ans;
        }
    }
};