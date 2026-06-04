class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //nums1 = [4,1,2], nums2 = [1,3,4,2]
        //Output: [-1,3,-1]
        vector<int>store;
        unordered_map<int,int>mp;
        int n =nums1.size();
        int m = nums2.size();
        int j=0;
        for(int i =0;i<m;i++){
            mp[nums2[i]] = -1;
            for(int j=i;j<m;j++){
                if(nums2[i]<nums2[j]){
                    mp[nums2[i]] = nums2[j];
                    break;
                }
            }
        }

        for(int i = 0;i<n;i++){
            store.push_back(mp[nums1[i]]);
        }
        return store;
    }
};