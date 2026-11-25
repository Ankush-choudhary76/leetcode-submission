class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<int>dp(2, 0);

        for (int ind = n - 1; ind >= 0; ind--) {
            for (int buy = 0; buy < 2; buy++) {
                int val = 0;
                if (buy == 0) {
                    val= max(0 + dp[0],
                              -prices[ind] + dp[1]);
                }
                if (buy == 1) {
                    val= max(0 + dp[1],
                              prices[ind] - fee +
                                  dp[0]);
                }
                dp[buy]=val;
            }
            
        }
        return dp[0];
    }
};