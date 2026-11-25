class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size() , m = matrix[0].size();
         vector<int>dp(n,0);
        vector<int>temp(m,0);
        for(int i= 0 ; i<n ; i++){
            for(int j= 0 ; j<m ; j++){
                if(i==0 ){
                temp[j] = matrix[i][j] ;
                continue;
                }
             int down = matrix[i][j] + dp[j] ; 
             int left =INT_MAX;
             int right = INT_MAX;
             if(j>0){
                 left = matrix[i][j]+dp[j-1];
             }
             if(j<n-1){
                right = matrix[i][j] + dp[j+1];
            } 
             temp[j] = min(down , min(left , right));
            }
            dp = temp ; 
        }
        int mini = INT_MAX;
         for(int i=0 ; i<m;i++){
        mini = min(mini , dp[i]);
         }
         return mini ; 
    }
};