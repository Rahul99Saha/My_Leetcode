class Solution {
public:
    int prod(int n){
        int pro = 1;
        while(n>0){
            int d = n%10;
            pro*=d;
            n/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        int p = 0;
        for(int i = n;;i++){
            if(prod(i) % t == 0) {
                p=i;
                break;
            }
        }
        return p;
    }
};