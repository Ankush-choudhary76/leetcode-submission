class Solution {
public:
    long long maxDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> dp(n + 2, 0);
        for (int i = n - 1; i >= 0; i--) {
            long long one = nums[i] - dp[i + 1];
            dp[i] = one;
            if (i + 1 < n) {
                long long two = nums[i] + nums[i + 1];
                if (two % 3 == 0) {
                    two -= dp[i + 2];
                } else {
                    two += dp[i + 2];
                }

                dp[i] = max(dp[i], two);
            }
            if (nums[i] % 3 != 0) {
                long long cur = nums[i] + dp[i + 1];
                dp[i] = max(dp[i], cur);
            }
        }
        return dp[0];
    }
};