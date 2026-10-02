class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //[1,2,3,4,5,6,1]
        //  l = 0,r = k-1
        //  l = -1; r = k-2;
        // l = -2 ,r = k-3

        int maxsum = 0;
        int sum = 0;
        int n = cardPoints.size();
        for(int i = 0;i<k;i++){
            sum += cardPoints[i];
        }
        maxsum = max(sum,maxsum);
        int l = 0;
        int r = k-1;
        while(r >= 0){
            sum-=cardPoints[r];
            l--;
            r--;
            sum+=cardPoints[(l+n)%n];
            maxsum = max(sum,maxsum);
        }
        return maxsum;
    }
};