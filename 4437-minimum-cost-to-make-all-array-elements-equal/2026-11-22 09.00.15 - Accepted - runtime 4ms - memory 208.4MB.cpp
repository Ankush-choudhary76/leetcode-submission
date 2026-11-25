class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();
        long long ans = LLONG_MAX;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j + 1 < n && nums[j] == nums[j + 1]) {
                j++;
            }
            if (max(i, 1) <= min(j, n - 2)) {
                long long cost = 1LL * (i + n - 1 - j) * nums[i];
                ans = min(ans, cost);
            }
            i = j + 1;
        }
        return ans == LLONG_MAX ? 0 : ans;
    }
};