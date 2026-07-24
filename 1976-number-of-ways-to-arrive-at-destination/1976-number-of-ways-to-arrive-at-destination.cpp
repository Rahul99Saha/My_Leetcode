class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        int m = roads.size();
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>pq;
        vector<long long>dist(n,LLONG_MAX);
        vector<int>ways(n,0);
        vector<pair<int,int>>adj[n];
        for(auto &r : roads){
            adj[r[0]].push_back({r[1],r[2]});
            adj[r[1]].push_back({r[0],r[2]});
        }
        int mod = (int)(1e9+7);
        dist[0] = 0;
        ways[0] = 1;
        pq.push({0,0});
        while(!pq.empty()){
            long long wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if(wt > dist[node]) continue;
            for(auto it:adj[node]){
                int v = it.first;
                long long w = it.second;
                if(dist[node] + w < dist[v]){
                    dist[v] = dist[node] + w;
                    pq.push({w+wt,v});
                    ways[v] = ways[node];
                }
                else if(dist[node] + w == dist[v]){
                    ways[v]= (ways[v] + ways[node]) % mod;
                }
            }
        }
        return ways[n-1] % mod;
    }
};