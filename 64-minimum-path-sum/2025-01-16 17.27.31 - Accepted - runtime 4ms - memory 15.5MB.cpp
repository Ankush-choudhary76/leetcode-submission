class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size()  , m = grid[0].size();
       vector<int>dp(m,0);
       vector<int>temp(m,0);
            
      for(int i=0 ; i<n; i++){
        for(int j = 0 ; j<m; j++){
        if(i==0 && j==0 ){
           temp[i] = grid[i][j]; 
        }else{
            int nt = grid[i][j];
            int take = grid[i][j] ; 
            if(i >0) {
                take += dp[j];
            }else{
                take = 1e9;
            }
             if(j >0) {
                nt += temp[j-1];
            }else{
                nt = 1e9;
            }
            temp[j] = min(nt ,take );
        }
         dp = temp ;
      }
      
      
    }
    return dp[m-1];
    }       
     
};