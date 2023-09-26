class Solution 
{
public:
    string removeDuplicateLetters(string s) 
    {
        //store the freq pf each character in a array
        //hasmap of 26
        // vis for marking visited character
        vector<int>count(26,0),visited(26,0);
        string res="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            count[s[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            count[s[i]-'a']--;
        
        if(!visited[s[i]-'a']){
        while(res.size() > 0 && res.back() > s[i] && count[res.back() - 'a'] > 0)
        {
             visited[res.back() - 'a'] = 0;
             res.pop_back();
        }
                res += s[i];
                visited[s[i] - 'a'] = 1;
            }
        }
        // return resultant string
        return res;

    }
};