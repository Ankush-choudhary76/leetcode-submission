class Solution {
public:
    vector<int> largestPower(vector<int>& nums) {

        int n = nums.size();
        int N = 1 << 15;

        vector<int> cnt(N, 0);

        for (auto it : nums) {
            cnt[it]++;
        }

        for (int b = 0; b < 15; b++) {
            for (int j = 0; j < N; j++) {
                if ((j & (1 << b)) == 0) {
                    cnt[j] += cnt[j | (1 << b)];
                }
            }
        }

        vector<int> p(15, 0);

        for (int b = 14; b >= 0; b--) {

            int ms = 0;

            for (int j = b + 1; j < 15; j++) {
                if (p[j] > 0)
                    ms |= (1 << j);
            }

            vector<pair<int, int>> v;

            for (int j = b + 1; j < 15; j++) {
                if (p[j] > 0) {
                    v.push_back({p[j], j});
                }
            }

            sort(v.begin(), v.end());

            int cur = 0;
            int used = 0;
            bool done = false;

            for (auto it : v) {

                int pos = it.first;
                int bit = it.second;

                int have = cnt[ms | (1 << b)] - used;

                if (have < pos - cur) {
                    p[b] = cur + have;
                    done = true;
                    break;
                }

                used += pos - cur;
                cur = pos;

                ms &= ~(1 << bit);
            }

            if (!done) {

                int have = cnt[(1 << b)] - used;

                if (have >= n - cur)
                    p[b] = n;
                else
                    p[b] = cur + have;
            }
        }

        vector<int> ans(15);

        for (int i = 0; i < 15; i++) {
            ans[i] = p[14 - i];
        }

        return ans;
    }
};