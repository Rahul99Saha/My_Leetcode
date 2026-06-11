class Solution {
public:
    vector<int>findNSE(const vector<int>& arr){
        int n=arr.size();
        vector<int>ans(n,n);
        stack<int>st;
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]= st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int>findPSE(const vector<int>& arr){
        int n=arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i = 0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]= st.top();
            }
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = findNSE(arr);
        vector<int> pse = findPSE(arr);
        long long total = 0;
        long long left,right;
        int mod = 1e9+7;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            left = i-pse[i];
            right = nse[i]-i;
            total = (total + (right * left) % mod * arr[i]) % mod;
        }
        return (int)total;
    }
};