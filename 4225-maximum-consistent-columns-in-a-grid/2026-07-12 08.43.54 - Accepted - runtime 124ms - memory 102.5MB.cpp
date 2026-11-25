class Solution {
public:
    int maxConsistentColumns(vector<vector<int>>& grid, int limit) {
        int m = grid.size() , n =grid[0].size() , ans =1 ;

        vector<int>dp(n ,1);

        for(int i=0 ; i<n;i++){
            for(int j=0 ; j<i;j++){
                bool flag = true ; 

                 for(int k=0 ; k<m ;k++){
                     if(abs(grid[k][i]- grid[k][j])>limit){
                         flag = false ; 
                         break ; 
                     }
                     
                 }
                if(flag){
                    dp[i] = max(dp[i] , dp[j]+1);
                }
            }
            ans = max(ans , dp[i]);
        }
        return ans ; 
    }
};