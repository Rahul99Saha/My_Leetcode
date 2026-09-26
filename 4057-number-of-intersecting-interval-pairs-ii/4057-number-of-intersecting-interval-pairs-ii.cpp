class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        // [[1,2],[2,3],[3,4]]
        //   0.    1.    2
        //  i    mid
        int count = 0;
        int n = intervals.size();
        long long ans = 0;
        sort(intervals.begin(),intervals.end());
        for(int i = 0;i<n;i++){
            int low = i+1;
            int high = n-1;
            int pos = i;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(intervals[i][1] < intervals[mid][0]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                    pos = mid;
                }       
            }
            ans += pos - i;
        }
        return ans;
    }
};
