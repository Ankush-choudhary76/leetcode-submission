class Solution {
public:
   
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>dp(2,0);
        vector<int>cur(2,0);
        int profit = 0 ; 
        
        for ( int ind = n-1 ; ind>=0 ; ind--){
            for(int buy = 0 ; buy<=1 ; buy++ ){
               int  profit = 0 ;
               if(buy==0){
                cur[buy] = max(0 + dp[0]  , -prices[ind] + dp[1] );
                }
                if(buy==1){
                cur[buy]= max(0 + dp[1]  , prices[ind] + dp[0] );
                }
               dp = cur;
            }
        }
        return dp[0];
    }
};