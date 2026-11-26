class Solution {
public:
    bool canAliceWin(int n) {
        int move = 10;
        int flag = -1;
        if(n<10)
            return false;
        while(n>0){
            n -= move;
            if(n<0){
                flag = 0;
                break;
            }
            move--;
            n-=move;
            if(n<0){
                flag = 1;
                break;
            }
            move--;
        }
        return flag==1;
    }
};