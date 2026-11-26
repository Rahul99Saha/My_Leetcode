class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1e9 + 7;
        int prefix = 0;
        int even = 0;
        int odd = 0;
        long long ans = 0;
        for(int i = 0;i<arr.size();i++){
            prefix+=arr[i];
            if(prefix % 2 != 0){
                ans+=even;
                ans++;
                odd++;
            }
            else{
                ans+=odd;
                even++;
            }
        }
        return ans%MOD;
    }
};