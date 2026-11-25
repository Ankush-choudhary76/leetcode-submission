class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n + 2, vector<int>(2, 0));
        for (int ind = n-1; ind >= 0; ind--) {
            for (int buy = 0; buy < 2; buy++) {
                int value = 0;
                if (buy == 0) {
                    value = max(0 + dp[ind + 1][0],
                                -prices[ind] + dp[ind + 1][1]);
                }
                if (buy == 1) {
                    value = max(0 + dp[ind + 1][1],
                                prices[ind] + dp[ind+2][0]);
                }
                dp[ind][buy] = value ; 
            }
        }
        return dp[0][0];
    }
};