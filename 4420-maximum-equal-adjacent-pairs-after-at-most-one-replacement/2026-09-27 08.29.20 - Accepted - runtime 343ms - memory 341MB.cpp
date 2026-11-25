class Solution {
public:
    long long mod = 1000000001LL;
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n = nums.size();
        int bs = 0, maxi = 0;

        unordered_map<long long, int> mpp;

        for (int i = 0; i < n - 1; i++) {
            int a = nums[i], b = nums[i + 1];

            if (a == b) {
                bs++;
            } else {
                int x = min(a, b);
                int y = max(a, b);
                long long r = 1LL * x * mod + y;
                mpp[r]++;
                maxi = max(maxi, mpp[r]);
            }
        }
        return bs + maxi;
    }
};