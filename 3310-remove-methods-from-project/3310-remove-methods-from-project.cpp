class Solution {
public:
    void dfs(vector<int>& visited,vector<vector<int>>& adj,int node){
        visited[node]=1;
        for(auto it : adj[node]){
            if(!visited[it]){
                dfs(visited,adj,it);
            }
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        //
        vector<vector<int>>adj(n);
        int m = invocations.size();
        for(int i = 0;i<m;i++){
            adj[invocations[i][0]].push_back(invocations[i][1]);
        }
        vector<int>visited(n,0);
        vector<int>ans;
        dfs(visited,adj,k);
        for(int i =0;i<n;i++){
            if(visited[i]==0){
                for(auto it:adj[i]){
                    if(visited[it] == 1){
                        for(int j =0;j<n;j++)
                            ans.push_back(j);
                        return ans;
                    }
                }
            }
        }
        for(int i = 0;i<n;i++){
            if(visited[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};