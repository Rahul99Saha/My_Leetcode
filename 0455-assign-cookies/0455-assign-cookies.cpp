class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        //g 11 12 13
        //s 1 2 3 4 20
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int g_size = g.size();
        int s_size = s.size(); 
        int count = 0;
        int j = 0;
        int i = 0;
        while(i<g_size && j<s_size){
            if(g[i]<=s[j]){
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};