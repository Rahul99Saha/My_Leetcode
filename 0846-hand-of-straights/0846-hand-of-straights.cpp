class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        //[1,2,3,6,2,3,4,7,8]
        //1-1,2-2.3-2,4-1,6-1,7-1,8-1
        //2-1,3-1,4-1,6-1,7-1,8-1
        //6-1,7-1,8-1
        if (hand.size() % groupSize != 0)
            return false;
        map<int,int>mp;
        for(int h:hand){
            mp[h]++;
        }
        while(mp.size()>0){
           int card = mp.begin()->first;
           int s = mp.begin()->second;
           for(int i = 0;i<groupSize;i++){
            if(mp.find(card+i)==mp.end() || mp[card+i]<s)
                return false;
            mp[card+i] -= s;
            if(mp[card+i] == 0)
                mp.erase(card+i);
           }
        }
        return true;
    }
};