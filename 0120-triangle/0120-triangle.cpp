class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       int m = triangle.size();
       vector<vector<int>>dp(m,vector<int>(m,0));
       dp[0][0] = triangle[0][0];
       for(int i = 1;i < m;i++){
           for(int j = 0;j <triangle[i].size();j++){
                if(j==0){
                    dp[i][0]=dp[i-1][0]+triangle[i][0];
                }
                else if(j == i){
                    dp[i][j] = dp[i-1][j-1]+triangle[i][j];
                }
                else{
                    dp[i][j] = min(dp[i-1][j-1],dp[i-1][j]) + triangle[i][j];
                }
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
       }
       int result = INT_MAX;
       for(int j = 0;j<m;j++){
            result = min(dp[m-1][j],result);
       }
       return result;
    }   
};