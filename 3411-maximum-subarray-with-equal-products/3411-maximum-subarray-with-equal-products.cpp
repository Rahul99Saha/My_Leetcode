class Solution {
public:
    int gcd(int a,int b){
        return b == 0 ? a : gcd(b,a%b);
    }
    int lcm(int a,int b){
        return (a * b)/gcd(a,b);
    }
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            int pro = 1,g = 0,l =1;
            for(int j = i;j<n;j++){
                l =  lcm(l,nums[j]);
                g = gcd(g,nums[j]);
                pro *= nums[j]; 
                if(pro == (l * g)){
                    ans = max(ans,j-i+1);
                }
                if(pro > l * g) 
                    break;
            }
        }
        return ans;
    }
};