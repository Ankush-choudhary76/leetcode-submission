class Solution {
public:
    long long maxValue(vector<int>& nums) {

        int n = nums.size();

        long long val = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                val += nums[i];
            else
                val -= nums[i];
        }

        long long pre = 0;
        long long s = 0;

        vector<long long> arr(2, LLONG_MAX);

        arr[0] = 0;

        for (int i = 0; i < n; i++) {

            int a = i % 2;
            int b = 1 - a;

            if (a == 0)
                pre -= nums[i];
            else
                pre += nums[i];

            if (arr[b] != LLONG_MAX) {
                s = max(s, 2LL * (pre - arr[b]));
            }

            arr[(i + 1) % 2] =
                min(arr[(i + 1) % 2], pre);
        }

        return val + s;
    }
};