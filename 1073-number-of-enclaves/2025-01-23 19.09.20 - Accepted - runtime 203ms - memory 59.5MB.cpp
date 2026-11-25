class Solution {
public:
     void dfs(int row , int col ,vector<vector<int>>& grid,vector<vector<int>>& vis ){
         int n = grid.size(), m =grid[0].size();
        vis[row][col] = 1 ; 
         vector<int>delrow ={-1,0,1,0};
          vector<int>delcol ={0,-1,0,1}; 
          for(int i=0 ; i<4 ; i++){
            int nr = delrow[i]+row;
            int nc = delcol[i]+col;
            if(nr>= 0 && nr<n && nc>= 0 && nc<m && vis[nr][nc]!=1&&grid[nr][nc]==1  ){
                dfs(nr , nc , grid , vis );  
            }
          }
          return ; 
     }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size(), m =grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i= 0 ; i<n;i++){
            if(grid[i][0]==1 && !vis[i][0]){
             dfs(i , 0 , grid , vis);
            }
            if(grid[i][m-1]==1&& !vis[i][m-1]){
             dfs(i , m-1 , grid , vis);
            }
        }
         for(int i= 0 ; i<m;i++){
            if(grid[0][i]==1 && !vis[0][i]){
             dfs(0 , i , grid , vis);
            }
            if(grid[n-1][i]==1 && !vis[n-1][i]){
             dfs(n-1 , i , grid , vis);
            }
        }
         int cnt = 0 ; 
        for(int i=0 ; i<n;i++){
            for(int j=0 ; j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    cnt++;
                }
            }
        }
        return cnt ; 
    }
};