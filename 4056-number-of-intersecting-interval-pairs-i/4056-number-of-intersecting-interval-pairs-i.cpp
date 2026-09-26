class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        // [[1,2],[2,3],[3,4]]
        int count = 0;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(intervals[i][1]>=intervals[j][0])
                    count++;
            }
        }
        return count;
    }
};