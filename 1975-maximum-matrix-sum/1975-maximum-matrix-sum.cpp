class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int c = 0;
        long long sum = 0;
        int min = INT_MAX;
        for(int i = 0;i < m;i++)
        {
            for(int j = 0;j < n;j++)
            {
                if(matrix[i][j] < 0)
                {
                    sum=sum-matrix[i][j];
                    c++;
                    if(min > abs(matrix[i][j]))
                    {
                        min = abs(matrix[i][j]);
                    }
                }
                else
                {
                    sum = sum + matrix[i][j];
                    if(min > matrix[i][j])
                    {
                        min = matrix[i][j];
                    }
                }
            }

        }
        if(c%2 == 0)
            return sum;
        else
            return sum-(2*min);
    }
};