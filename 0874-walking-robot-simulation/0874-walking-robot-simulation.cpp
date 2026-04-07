class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>>obs;
        for(auto &o : obstacles){
            obs.insert({o[0],o[1]});
        }
        vector<pair<int,int>>dirs = {
            {0,1},{1,0},{0,-1},{-1,0}
        };
        int i = 0;
        int j = 0;
        int dir = 0;
        int maxDist = 0;
        for(int cmd : commands)
        {
            if(cmd == -2){
                dir=(dir+3)%4;    
            }
            else if(cmd == -1){
                dir=(dir+1)%4;
            }
            else{
                for(int k=0;k<cmd;k++){
                    int x = i + dirs[dir].first;
                    int y = j + dirs[dir].second;
                    if (obs.find({x, y}) != obs.end()){
                        break;
                    }
                    i = x;
                    j = y;
                    maxDist = max(maxDist, i*i + j*j);
                }
            }
        }
        return maxDist;
    }
};