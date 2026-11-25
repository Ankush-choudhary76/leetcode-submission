class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(2, vector<int>(3,0));
        vector<vector<int>>cur(2, vector<int>(3,0));
        
        for(int ind = n-1 ; ind>=0 ; ind--){
            for(int buy=0 ; buy<=1 ; buy++){
                for(int cap =1 ; cap<=2; cap++){
                     if(buy==0){
                      cur[buy][cap] = max( 0+ dp[0][cap] ,
                          -prices[ind]+ dp[1][cap]);
                     }
                     if(buy==1){
                        cur[buy][cap] = max(0+ dp[1][cap] ,
                                    prices[ind]+ dp[0][cap-1]);
                    }
                }
                dp = cur ; 
            }
        }
        return dp[0][2];
    }
};