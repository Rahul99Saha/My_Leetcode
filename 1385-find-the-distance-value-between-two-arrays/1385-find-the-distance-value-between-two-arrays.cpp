class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        // arr1 = [4,5,8], arr2 = [10,9,1,8]
        int i = 0;
        int j = 0;
        int val = 0;
        while(i < arr1.size()){
            j=0;
            while(abs(arr1[i]-arr2[j])>d){
                j++;
                if(j == arr2.size()){
                    val++;
                    break;
                }
            }
            i++;
        }
        return val;
    }
};