class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // 1,2,3,2,2
        unordered_map<int,int>mp;
        int i = 0,j = 0;
        int n = fruits.size();
        int maxi = 0;
        for(j=0;j<n;j++){
            mp[fruits[j]]++;
            while(mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0)
                    mp.erase(fruits[i]);
                i++;
            }
            maxi = max(maxi,j-i+1);
        }
        return maxi;
    }
};