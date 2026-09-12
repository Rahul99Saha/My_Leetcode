class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        vector<long long>prefix(n+n,0);
        long long sum = 0;
        int count=0;
        for(int i = 0;i<2*n;i++){
            sum+=nums[i%n];
            prefix[i] = sum;
        }
        long long total = sum/2;
        for(int i = 0;i<n;i++){
            long long left_sum = 0;
            if(i == 0)
                left_sum = prefix[n/2-1];
            else
                left_sum = prefix[n/2+i-1]-prefix[i-1];
            long long right_sum = total-left_sum;
            // cout<<left_sum<<" "<<right_sum<<endl;
            if(left_sum > right_sum)
                count++;
        }
        return count;
    }
};