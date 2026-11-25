class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid .size();
        int m = obstacleGrid[0] .size();
       vector<int>dp(m,-1) ; 

        for(int i=0 ; i<n ; i++){
             vector<int>temp(m,-1) ; 
            for(int j=0 ; j<m;j++){
                if(obstacleGrid[i][j] == 1){
                    temp[j] = 0 ;
                    continue ; 
                }
                if(i==0 && j==0 ){
                    temp[j] = 1 ;
                    continue ; 
                }
                int left = 0 , up = 0 ;
                if(i>0) up = dp[j];
                if(j>0) left = temp[j-1] ; 
                temp[j] = up + left ; 
            }
            dp = temp ; 
        }
        return dp[m-1];
    }
};