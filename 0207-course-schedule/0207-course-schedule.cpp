class Solution {
public:
    bool dfs(int node,vector<vector<int>>& adj,vector<int>& visited,vector<int>& pathvisited){
        visited[node] = 1;
        pathvisited[node] = 1;
        for(auto it : adj[node]){
            if(!visited[it]){
                if(dfs(it,adj,visited,pathvisited)== true)
                    return true;
            }
            else if(pathvisited[it] == 1){
                return true;
            }
        }
        pathvisited[node] = 0;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        // [[1,0],[0,1]]
        vector<vector<int>>adj(n);
        for(int i = 0;i<prerequisites.size();i++){
            int preq = prerequisites[i][1];
            int course = prerequisites[i][0];
            adj[preq].push_back(course);
        }
        vector<int>visited(n,0);
        vector<int>pathvisited(n,0);
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,pathvisited) == true)
                    return false;
            }
        }
        return true;
    }
}; 