class Solution {
public:
    long long maxAlternatingSum(vector<int>& a) {
        const long long ng = -(1LL << 60);

        long long dp[2][2] = {{ng, ng}, {ng, ng}};
        long long an = ng;

        for (auto x : a) {
            long long nd[2][2] = {{ng, ng}, {ng, ng}};

            nd[0][1] = max(nd[0][1], 1LL * x);
            nd[1][1] = max(nd[1][1], 1LL * x);

            for (int d = 0; d <= 1; d++) {
                for (int p = 0; p <= 1; p++) {
                    if (dp[d][p] == ng)
                        continue;

                    long long v = dp[d][p] + (p == 0 ? x : -x);

                    nd[d][p ^ 1] = max(nd[d][p ^ 1], v);

                    if (d == 0) {
                        nd[1][p] = max(nd[1][p], dp[d][p]);
                    }
                }
            }

            memcpy(dp, nd, sizeof(dp));

            an = max({an, dp[0][0], dp[0][1],
                      dp[1][0], dp[1][1]});
        }

        return an;
    }
};