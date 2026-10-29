class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        // numBottles = 9, numExchange = 3
        // 15 + 3 + 1 =19
        // 9 +9/3 + 3/3  1/3
        //15 + 3 + 
        int count = 0;
        int filled = numBottles;
        int notfilled = 0;
        while(filled > 0){
            count = count + filled;
            filled = numBottles/numExchange;
            notfilled = numBottles % numExchange;
            numBottles = filled + notfilled;
        }
        return count;
    }
};