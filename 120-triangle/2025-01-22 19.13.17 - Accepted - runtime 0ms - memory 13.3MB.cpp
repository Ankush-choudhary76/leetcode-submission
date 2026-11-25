class Solution {
public:
    int minimumTotal(vector<vector<int>>& arr) {
          int n = arr.size();
    vector<vector<int>>dp(n, vector<int>(n,0));
    for(int i=0 ; i<n;i++){
        dp[n-1][i] = arr[n-1][i];
    }
    for(int i=n-2 ; i>=0 ; i--){
        for(int j=i ; j>=0 ; j--){
            int take = dp[i+1][j] + arr[i][j];
            int NOT_take = dp[i+1][j+1] + arr[i][j];
            dp[i][j] = min(take , NOT_take); 
        }
    }
    return dp[0][0];
    }
};