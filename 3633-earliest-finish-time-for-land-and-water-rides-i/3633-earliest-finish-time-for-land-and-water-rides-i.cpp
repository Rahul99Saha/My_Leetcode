class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int min_land = INT_MAX;
        int min_water = INT_MAX;
        int ans1 = INT_MAX ;
        int ans2 = INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            min_land = min(min_land,landStartTime[i]+landDuration[i]);
        }
        for(int i=0;i<waterStartTime.size();i++){
            min_water = min(min_water,waterStartTime[i]+waterDuration[i]);
        }
        //LW
        for(int i= 0;i<waterStartTime.size();i++){
                ans1 = min(ans1,max(min_land,waterStartTime[i])+waterDuration[i]);
        }
        //WL
        for(int i= 0;i<landStartTime.size();i++){
                ans2 = min(ans2,max(min_water,landStartTime[i])+landDuration[i]);
        }
        return min(ans1,ans2);
    }
};