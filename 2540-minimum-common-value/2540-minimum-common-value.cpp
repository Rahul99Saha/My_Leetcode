#include <bits/stdc++.h>
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0,j=0;
        int mini=INT_MAX;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j]){
                 mini =min(mini, nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }  
        return (mini == INT_MAX) ? -1 : mini;
    }
};