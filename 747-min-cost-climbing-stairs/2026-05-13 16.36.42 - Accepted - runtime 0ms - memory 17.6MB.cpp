class Solution {
public:
    int minCostClimbingStairs(vector<int>& arr) {
        int n = arr.size(); 
        vector<int>dp(n,0); 
        for(int i=0 ; i<n;i++){
            if(i<2) dp[i]=arr[i];
            else dp[i] = arr[i]+ min(dp[i-1] , dp[i-2]);
        }
        return min(dp[n-1] , dp[n-2]);
    }
};