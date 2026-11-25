class Solution {
public:
    int maxSum(const vector<int>& nums, const int K) {
        constexpr int SZ = 30, MOD = 1e9 + 7;
        int arr[SZ]{};

        for (int n : nums) {
            for (int index = 0; n; n >>= 1, index++) {
                arr[index] += n & 1;
            }
        }
        int ret = 0;
        for (int i = 0; i < K; ++i) {
            long v = 0;
            for (int b = SZ - 1; b >= 0; --b) {
                if (arr[b]) {
                    arr[b] -= 1;
                    v |= 1L << b;
                }
            }
            ret = (ret + v * v) % MOD;
        }
        return ret;
    }
};