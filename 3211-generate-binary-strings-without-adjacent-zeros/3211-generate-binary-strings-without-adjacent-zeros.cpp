class Solution {
public:
    vector<string> validStrings(int n) 
    {
        vector<string> ans;
        vector<int> ds;
        generate_subsequence(0, n, ds, ans);
        return ans;
    }
    void generate_subsequence(int index,int n,vector<int>&ds,vector<string>&ans)
    {
        if(index == n)
        {   
            string temp = "";
            for(int i= 0;i<ds.size();i++){    
                temp += to_string(ds[i]);
            }
            ans.push_back(temp);
            return;
        }
        ds.push_back(1);
        generate_subsequence(index+1, n,ds,ans);
        ds.pop_back();

        if(ds.empty() || ds.back() != 0){
            ds.push_back(0);
            generate_subsequence(index+1, n,ds,ans);
            ds.pop_back();
        }
    }
};