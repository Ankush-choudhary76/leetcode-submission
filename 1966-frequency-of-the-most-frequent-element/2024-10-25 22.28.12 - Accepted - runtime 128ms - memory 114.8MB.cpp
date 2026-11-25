class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Create a prefix sum array
        int n = nums.size();
        vector<long long> prefixSum(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        }

        int maxFrequency = 1;

        // Step 3: Binary search to find maximum window size
        for (int right = 1; right <= n; ++right) {
            int left = 1, high = right;

            while (left < high) {
                int mid = left + (high - left) / 2;

                // Calculate the total cost to make all elements in the range [mid, right] equal to nums[right-1]
                long long totalCost = (long long)nums[right - 1] * (right - mid + 1) - (prefixSum[right] - prefixSum[mid - 1]);

                if (totalCost <= k) {
                    high = mid;
                } else {
                    left = mid + 1;
                }
            }

            // Calculate the number of elements that can be made equal
            maxFrequency = max(maxFrequency, right - left + 1);
        }

        return maxFrequency;
    }
};
