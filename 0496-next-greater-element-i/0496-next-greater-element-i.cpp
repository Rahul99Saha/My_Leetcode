class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //nums1 = [4,1,2], nums2 = [1,3,4,2]
        //Output: [-1,3,-1]
        vector<int>store;
        int n =nums1.size();
        int m = nums2.size();
        int j=0;
        int greater = -1;
        for(int i =0;i<n;i++){
            while(nums2[j]!=nums1[i] && j<m-1)
            {
                j++;
            }
            for(int k=j;k<m;k++){
                if(nums2[k]>nums1[i]){
                    greater = nums2[k];
                    break;
                }
            }
            store.push_back(greater);
            greater = -1;
            j=0;
        }
        return store;
    }
};