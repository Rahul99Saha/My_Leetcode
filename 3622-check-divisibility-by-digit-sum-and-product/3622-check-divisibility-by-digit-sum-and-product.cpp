class Solution {
public:
    bool checkDivisibility(int n) {
        int copy = n;
        int sum = 0;
        int prod = 1;
        while(n>0){
            int d = n % 10;
            sum = sum + d;
            prod *= d;
            n/=10;
        }
        if( copy % (sum+prod) == 0)
        return true;      
        else 
        return false;
    }
};