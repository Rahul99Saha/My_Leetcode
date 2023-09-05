class Solution {
public:
    void combine_island(vector<vector<char>>&matrix,int x,int y,int m, int n)
    {
        if( m >= x || n >= y|| m < 0 || n < 0 || matrix[m][n]!='1')//boundary case and checking 
        return;
        matrix[m][n]=2;
        combine_island(matrix,x,y,m+1,n);
        combine_island(matrix,x,y,m,n+1);
        combine_island(matrix,x,y,m-1,n);
        combine_island(matrix,x,y,m,n-1);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        //consider 1 as not visted and 2 as visited or you can erase the island
        int rows=grid.size();
        if(rows==0)
        return 0;
        int cols=grid[0].size();
        int island=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1')
                {
                    island++;
                    combine_island(grid,rows,cols,i,j);
                }
            }
        }
        return island++;
    }
};