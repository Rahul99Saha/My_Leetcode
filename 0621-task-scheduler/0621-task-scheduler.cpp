class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // A-3,B-3
        // 3-A,3-B
        // n+1 = 3
        //A,B, ..... A,B,....A,B
        priority_queue<pair<int,char>>pq;
        priority_queue<pair<int,char>>temp;
        map<char,int>mp;
        for(auto t: tasks){
            mp[t]++;
        }
        for(auto m:mp){
            pq.push({m.second, m.first});
        }
        int i = 0;
        int interval = 0;
        while(!pq.empty()){
            for(i = 0;i<n+1;i++){
                if(pq.empty())
                    break;
                int val = pq.top().first;
                char node = pq.top().second;
                pq.pop();
                if(val>1)
                    temp.push({val-1,node});
            }
            while(!temp.empty()){
                int val1 = temp.top().first;
                char node1 = temp.top().second;
                temp.pop();
                pq.push({val1,node1});
            }
            if(!pq.empty())
                interval+=n+1;
            else
                interval+=i;
        }
        return interval;
    }
};