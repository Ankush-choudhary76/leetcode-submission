class Solution {
public:
     int fun(int ind , int target , int n , int val ,int totalsum ,vector<int>& nums,vector<vector<int>>&dp ){
    if(ind == n) return val == target ? 1 : 0;
    if(dp[ind][val + totalsum ] != -1) return dp[ind][val + totalsum];

    int neg = fun(ind + 1, target, n, val - nums[ind],totalsum , nums, dp);
    int pos = fun(ind + 1, target, n, val + nums[ind], totalsum , nums, dp);

    return dp[ind][val + totalsum ] = neg + pos;
     }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int totalsum = 0 ;
        for(int num : nums) totalsum += num;
        vector<vector<int>> dp(n, vector<int>(2 * totalsum + 1, -1));
          return fun(0 , target , n , 0  ,totalsum , nums, dp );
    }
};