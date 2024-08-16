// [3, 7, 8 ]
// [9, 11,13]
// [15,16,17]  
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    { 
        int m = matrix.size();
        int n = matrix[0].size();
        // finding min from every column
        vector<int>rows_min(m,INT_MAX);
        vector<int>cols_max(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int curr=matrix[i][j];
                rows_min[i]=min(rows_min[i],curr); 
                cols_max[j]=max(cols_max[j],curr);
            }
        }  
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==rows_min[i] && rows_min[i]==cols_max[j])
                return {matrix[i][j]};
            }
        }
        return {};
    }
};