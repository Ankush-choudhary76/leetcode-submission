class Solution {
public:
    int minRotations(int n, string s) {
        auto dist = [](int a, int b) {
            int d = abs(a - b);
            return min(d, 10 - d);
        };

        int total = dist(0, s[0] - '0');

        for (int i = 1; i < n; i++) {
            total += dist(s[i - 1] - '0', s[i] - '0');
        }

        int ans = total;

        ans = min(ans,
                  total
                  - dist(0, s[0] - '0')
                  + dist(0, s[n - 1] - '0'));

        for (int k = 1; k < n; k++) {
            int b = s[k - 1] - '0';
            int f = s[k] - '0';
            int l = s[n - 1] - '0';

            int nc = total
                   - dist(b, f)
                   + dist(b, l);

            ans = min(ans, nc);
        }

        return ans;
    }
};