class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<int> diff(n);
        long long k = (long long)k1 + k2;
        long long tot = 0;
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            tot += diff[i];
            maxi = max(maxi, diff[i]);
        }

        if (tot <= k) return 0;

        int left = 0, right = maxi;

        while (left < right) {
            int mid = left + (right - left) / 2;
            long long op = 0;

            for (auto  it : diff) {
                op += max(0, it - mid);
            }

            if (op <= k) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        int th = left;
        long long r = k;

        for (auto it : diff) {
            r -= max(0, it- th);
        }

        long long res = 0;

        for (auto  d : diff) {
            d = min(d, th);

            if (d == th && r > 0) {
                d--;
                r--;
            }

            res += 1LL * d * d;
        }

        return res;
    }
};