class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>visited(n+1,0);
        int ans = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<vector<pair<int,int>>>adj(n+1);
        vector<int>dist(n+1,1e9);
        dist[k] = 0;
        pq.push({0,k});
        for(auto &t : times){
            adj[t[0]].push_back({t[1],t[2]});
        }
        while(!pq.empty()){
            int node = pq.top().second;
            int wt = pq.top().first;
            pq.pop();
            visited[node] = 1;
            for(auto it:adj[node]){
                int v = it.first;
                int w = it.second;
                if(dist[node] + w < dist[v]){
                    dist[v]= dist[node] + w;
                    pq.push({w+wt,v});
                }   
            }
        }

        for(int i = 1;i<n+1;i++){
            ans = max(ans,dist[i]);
        }
        if(ans == 1e9) return -1;
        return ans;
    }
};