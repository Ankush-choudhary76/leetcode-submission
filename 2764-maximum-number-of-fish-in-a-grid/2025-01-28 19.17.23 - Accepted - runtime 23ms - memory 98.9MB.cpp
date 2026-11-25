class Solution {
public:
     int dfs(int row , int col ,vector<vector<int>>&grid ,vector<vector<int>>& vis,
      vector<int>&delrow,vector<int>delcol  ){
         int a = grid[row][col];
         int n = grid.size() , m = grid[0].size();
        vis[row][col]=1;
        
          for(int i=0 ; i<4;i++){
            int nr = row + delrow[i];
            int nc = col +delcol[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]!=0 && !vis[nr][nc]  ){
                 a+=  dfs (nr,nc , grid , vis , delrow , delcol );
            }
          }
         return a ; 
      }
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol = {0,1,0,-1};
        int maxi = 0 ; 
        for(int i=0 ; i<n ;i++){
            for(int j = 0 ; j<m ;j++){
                if(grid[i][j]!=0 && !vis[i][j]){
                int  r = dfs (i,j , grid , vis , delrow , delcol  );
                  maxi = max(r, maxi );
                }
            }
        }
        return maxi ; 
    }
};