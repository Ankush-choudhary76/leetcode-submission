class Solution {
public:
    int maxProfit(vector<int>& Arr) {
        int n = Arr.size();
        vector<vector<int>>dp(n+2, vector<int>(2 , 0 ));
        for(int ind =n-1 ; ind>=0 ; ind--){
            for(int buy = 0 ; buy<2 ; buy++){
                if(buy==0){
                    dp[ind][buy] = max(dp[ind+1][0]  , -Arr[ind] +dp[ind+1][1]);
                }
                 if(buy==1){
                   dp[ind][buy] = max(dp[ind+1][1]  ,Arr[ind]+dp[ind+2][0]);
                }
            }
        }
        return dp[0][0];
    }
};