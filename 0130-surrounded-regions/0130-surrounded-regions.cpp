class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>& visited,vector<vector<char>>& board,int m,int n){
        visited[row][col] = 1;
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        for(int i = 0;i<4;i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && board[nrow][ncol]=='O' && !visited[nrow][ncol]){
                dfs(nrow,ncol,visited,board,m,n);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i = 0;i<m;i++){
            for(int j = 0;j < n;j++){
                if(i == 0 || i == m-1 || j == 0 || j == n-1){
                    if(!visited[i][j] && board[i][j]=='O'){
                        dfs(i,j,visited,board,m,n);
                    }
                }
            }
        }
        for(int i = 0;i<m;i++){
            for(int j = 0;j < n;j++){
                if(!visited[i][j] && board[i][j]=='O'){
                    board[i][j] = 'X';
                }
            }
         }
    }
};