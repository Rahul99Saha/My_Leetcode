class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {   
        vector<int>ds; 
        int n = candidates.size();
        vector<vector<int>>ans;
        calculate_sum(0,n,ds,candidates,target,ans);
        return ans;
    }
    void calculate_sum(int index,int n,vector<int>&ds,vector<int>&candidates,int target,vector<vector<int>>&ans){
        if(index == n)
        {
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick 
        if(candidates[index] <= target){
            ds.push_back(candidates[index]);
            calculate_sum(index,n,ds,candidates,target-candidates[index],ans);
            ds.pop_back();
        }
        //not pick
        calculate_sum(index+1,n,ds,candidates,target,ans);
    }
};