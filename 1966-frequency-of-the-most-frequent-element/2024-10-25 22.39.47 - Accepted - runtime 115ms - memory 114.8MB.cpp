class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        vector<long> presum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            presum[i] = presum[i - 1] + nums[i - 1];
        }

        int mxfr = 1;

        for (int right = 1; right <= n; right++) {
            int left = 1, high = right;

            while (left < high) {
                int mid = left + (high - left) / 2;
                int val = (long)nums[right - 1] * (right - mid + 1) - (presum[right] - presum[mid - 1]);

                if (val <= k) {
                    high = mid;
                } else {
                    left = mid + 1;
                }
            }

            mxfr = max(mxfr, right - left + 1);
        }

        return mxfr;
    }
};
