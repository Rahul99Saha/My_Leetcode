class Solution {
public:
    int calculate(int n){
        int sum = 0;
        while(n>0){
            int d = n%10;
            sum+=d;
            n/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        
        vector<tuple<int,int,int>>store;
        for(int i = 0;i < nums.size();i++){
            store.push_back({calculate(nums[i]),nums[i],i});
        }
        sort(store.begin(),store.end());
        //10,37,0  1,100,1
        vector<int>visited(n,0);
        int swaps = 0;
        for(int i = 0;i<n;i++){
            int len = 0;
            if(visited[i]) continue;
            int curr = i;
            while(!visited[curr]){
                visited[curr] = 1;
                curr = get<2>(store[curr]);
                len++;
            }
            swaps+=len - 1;
        }
        return swaps;
    }
};