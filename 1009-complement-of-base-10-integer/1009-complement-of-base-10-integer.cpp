class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n == 0) return 1;
        int k = floor(log2(n))+1;
        int p = pow(2,k) - 1;
        return p-n;
    }
};