class Solution {
public:
    int minDays(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int k = 1; k * (k + 1) / 2 <= i; k++) {
                int points = k * (k + 1) / 2;
                int remaining = i - points;
                if (remaining == 0) {
                    dp[i] = min(dp[i], k);
                } else {
                    dp[i] = min(dp[i], k + 1 + dp[remaining]);
                }
            }
        }
        return dp[n];
    }
};