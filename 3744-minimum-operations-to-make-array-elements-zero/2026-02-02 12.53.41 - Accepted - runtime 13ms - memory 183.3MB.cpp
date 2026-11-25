class Solution {
public:
    long long fun(long long n) {
        if (n <= 0) return 0;
        long long res = 0, base = 1, step = 1;
        while (base <= n) {
            long long cnt = min(n, base * 4 - 1) - base + 1;
            res += cnt * step;
            base *= 4;
            step++;
        }
        return res;
    }
    long long minOperations(vector<vector<int>>& queries) {
        long long ans = 0;
        for (auto &q : queries) {
            long long l = q[0], r = q[1];
            long long total = fun(r) - fun(l - 1);
            ans += (total + 1) / 2;
        }
        return ans;
    }
};