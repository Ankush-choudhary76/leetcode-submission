class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size()  , m = grid[0].size();
       vector<vector<int>>dp(n,vector<int>(m,0));
            
      for(int i=0 ; i<n; i++){
        for(int j = 0 ; j<m; j++){
        if(i==0 && j==0 ){
            dp[i][j] = grid[i][j]; 
        }else{
            int nt = grid[i][j];
            int take = grid[i][j] ; 
            if(i >0) {
                take += dp[i-1][j];
            }else{
                take = 1e9;
            }
             if(j >0) {
                nt += dp[i][j-1];
            }else{
                nt = 1e9;
            }
            dp[i][j] = min(nt ,take );
        }
         
      }
      
      
    }
    return dp[n-1][m-1];
    }       
     
};