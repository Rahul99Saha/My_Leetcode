class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>visited(n,0);
        queue<int>q;
        int count = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
            count++;
            visited[i]=1;
            q.push(i);
            while(!q.empty()){
                int node = q.front();
                q.pop();
                for(int i = 0;i<n;i++){
                    if(isConnected[node][i] == 1 && !visited[i]){
                        visited[i] = 1;
                        q.push(i);
                    }  
                }  
            }           
            } 
        }
        return count;
    }
};