class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        int m = flights.size();
        int dis = -1;
        int ans = INT_MAX;
        vector<int> cost(n, INT_MAX);
        vector<vector<pair<int,int>>>adj(n);
        for(int i = 0; i < m;i++){
            int u = flights[i][0];
            int v = flights[i][1];
            int w = flights[i][2];
            adj[u].push_back({v,w});
        }
        queue<pair<int,int>>q;
        q.push({src,0});
        while(!q.empty()){
            int s = q.size();
            dis++;
            if(dis == k+1) break;
            for(int i = 0;i<s;i++) {
                int node = q.front().first;
                int wt = q.front().second;
                q.pop();
                for(auto it:adj[node]) { 
                    int v = it.first;
                    int w = it.second;
                    if(cost[v] > w + wt) {
                        cost[v] = w + wt;
                        q.push({v,wt+w});
                    }
                } 
            }
        }
        if(cost[dst] == INT_MAX) return -1;
        return cost[dst];
    }
};