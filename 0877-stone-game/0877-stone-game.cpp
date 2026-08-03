class Solution {
public:
    //check(piles)
    // alex_weight, bob_weight , arr, start,end
    // piles = [5, 3, 4, 5]
    //dp[0][2] = max(piles[0]-dp[1][2] , piles[2] - dp[0][1])
     //        = max(5-1,4-2)=4
    //
    //dp[1][3] = max(piles[1]-dp[2][3], piles[3] - dp[1][2])
    //         = max(3-1,5-1) = 4
    //dp[s][e] = max(piles[s]-dp[s+1][e],piles[e]- dp[s][e-1])
    //dp[0][3] = max(piles[0]-dp[1][3],piles[3]-dp[0][2])
    //dp[0][3]=max(5-4,5-4) = 1
  //dp[s][e] = [ 5 2 4 1]
    //         [ 0 3 1 4]
    //         [ 0 0 4 1]
    //.        [ 0 0 0 5]
    //return dp[s][e]>0
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i = 0;i<n;i++){
            dp[i][i] = piles[i];
        }
        for(int size = 1;size<n;size++){
            for(int s = 0; s<n ;s++){
                int e = s + size;
                if(e>=n) break;
                dp[s][e] = max(piles[s]-dp[s+1][e],piles[e]- dp[s][e-1]);
            }
        }
        return dp[0][n-1]>0;
    }
};