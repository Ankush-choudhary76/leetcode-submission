class Solution {
public:
    long long minCost(int n, string colors, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        for (auto  it : edges) {
            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> par(n, -1) ,  ord ,  sub(n, 1);

        ord.push_back(0);

        for (int i = 0; i < (int)ord.size(); i++) {
            int u = ord[i];

            for (int v : adj[u]) {
                if (v == par[u])
                    continue;

                par[v] = u;
                ord.push_back(v);
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            int u = ord[i];

            if (par[u] != -1) {
                sub[par[u]] += sub[u];
            }
        }

        long long cost = 0;
        vector<long long> dp(n, 0);
        long long gain = 0;

        for (int i = n - 1; i >= 0; i--) {
            int u = ord[i];
            long long wt;

            if (colors[u] == 'R') {
                wt = sub[u];
                cost += sub[u];
            } else {
                wt = -sub[u];
            }

            dp[u] = wt;

            for (auto v : adj[u]) {
                if (par[v] == u) {
                    dp[u] += max(0LL, dp[v]);
                }
            }

            gain = max(gain, dp[u]);
        }

        return cost - gain;
    }
};