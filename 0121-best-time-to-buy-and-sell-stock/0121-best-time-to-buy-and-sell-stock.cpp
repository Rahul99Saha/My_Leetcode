//maximumize profit[7,1,5,3,6,4] 7 1 2 5 
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxi=0;
        int min_price=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min_price)
            {
                min_price=prices[i];
            }
            maxi=max(maxi,prices[i]-min_price);
        }
        return maxi;
    }
};