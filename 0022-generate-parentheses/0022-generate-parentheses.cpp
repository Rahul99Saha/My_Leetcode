class Solution {
public:
    bool valid(string str)
    {
        int c = 0;
        for(char &ch : str)
        {
            if(ch == '(')
                c++;
            else
                c--;
            if (c < 0) 
                return false;
        }
        
        return c==0;
    }
    void generateParenthesis(int n,int index,string ds,vector<string>&ans)
    {
        if(index==n)
        {
            if(valid(ds))
            {
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back('(');
        generateParenthesis(n,index+1,ds,ans);
        ds.pop_back();
        ds.push_back(')');
        generateParenthesis(n,index+1,ds,ans);
        ds.pop_back();
    }
    vector<string> generateParenthesis(int n) 
    {
        int index=0;
        string ds = "";
        vector<string> ans;
        generateParenthesis(2*n,index,ds,ans);
        return ans;
    }
};