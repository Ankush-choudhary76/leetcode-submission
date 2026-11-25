class Solution {
public:
    long long minCost(vector<int>& nums) {
      int n = nums.size();
        long long ans = nums[0] + nums[n - 1];
        long long sum = 0, mx = LLONG_MIN, mn = LLONG_MAX;
        int cnt = 0;
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] < 0) {
                sum += nums[i];
                cnt++;
                mx = max(mx, (long long)nums[i]);
            } 
            else {
                mn = min(mn, (long long)nums[i]);
            }
        }
        if (cnt % 2) {
            long long x = sum - mx;
            long long y = LLONG_MAX;

            if (mn != LLONG_MAX)
                y = sum + mn;
            sum = min(x, y);
        }
        return ans + sum;
    }
};