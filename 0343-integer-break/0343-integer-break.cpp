class Solution {
public:
    int integerBreak(int n) 
    {
        //Try to include 3 in optimal solution read solution column in leetcode 
        if(n==2)return 1;
        if(n==3)return 2;
        int prod=1;
        while(n>4)
        {
            prod=prod*3;
            n-=3;
        }
        prod*=n;
        return prod;
    }
};