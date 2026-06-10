class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int n = asteroids.size();
        vector<int>ans;
        for(int i =0;i<n;i++){
            bool destroyed = false;
            while(!st.empty() && st.top()>0 && asteroids[i]<0){
                if(st.top()>abs(asteroids[i])){
                    destroyed = true;
                    break;
                }
                else if(st.top()<abs(asteroids[i])){
                    st.pop();
                }
                else{
                    destroyed =true;
                    st.pop();
                    break;
                }
            }
            if(destroyed==false)
                st.push(asteroids[i]);
        }
        while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};