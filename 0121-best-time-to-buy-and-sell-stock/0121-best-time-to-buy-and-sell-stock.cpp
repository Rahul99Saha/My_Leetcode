class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int mini = prices[0];
        int n = prices.size();
        int i = 0;
        for(int i = 1;i<n;i++){
            mini = min(mini,prices[i]);
            max_profit = max(max_profit,prices[i]-mini);      
        }
        return max_profit;
    }
};