class Solution {
public:
    int maxScore(vector<int>& par, vector<int>& op, vector<int>& sc) {

        int n = par.size();

        vector<vector<int>> tr(n);

        for (int i = 1; i < n; i++) {
            tr[par[i]].push_back(i);
        }

        vector<int> ord = {0};

        for (int i = 0; i < ord.size(); i++) {
            int u = ord[i];

            for (auto v : tr[u]) {
                ord.push_back(v);
            }
        }

        vector<long long> dp(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            int u = ord[i];

            long long sum = 0;
            long long mn = LLONG_MAX;

            for (auto v : tr[u]) {
                sum += dp[v];
                mn = min(mn, dp[v]);
            }

            if (tr[u].empty()) {
                dp[u] = sc[u];
                continue;
            }

            if (op[u] == 0) {
                dp[u] = sc[u] + sum - min(0LL, mn);
            } else {
                dp[u] = sc[u] + sum - mn;
            }
        }

        return dp[0];
    }
};
