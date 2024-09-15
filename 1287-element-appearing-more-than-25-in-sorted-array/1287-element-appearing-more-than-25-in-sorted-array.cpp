class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        // [1,2,2,6,6,6,6,7,10]
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int ans;
        for(auto i : mp)
        {
            if(i.second > (0.25*n))
            ans=i.first;
        }
        return ans;
    }
};